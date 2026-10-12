#include "tokenizer.h"

enum State { CODE, STRING, CHAR, LINE_COMMENT, BLOCK_COMMENT };

std::string removeComments(const std::string& src) {
    std::string result;
    State state = CODE;

    for (size_t i = 0; i < src.size(); i++) {
        char c = src[i];
        char next = (i + 1 < src.size()) ? src[i + 1] : '\0';

        if (state == CODE) {
            if (c == '"') {
                state = STRING;
                result += c;
            } else if (c == '\'') {
                state = CHAR;
                result += c;
            } else if (c == '/' && next == '/') {
                state = LINE_COMMENT;
                i++;
            } else if (c == '/' && next == '*') {
                state = BLOCK_COMMENT;
                i++;
            } else {
                result += c;
            }
        } else if (state == STRING || state == CHAR) {
            result += c;
            if (c == '\\' && next != '\0') {
                // escaped character: copy it too, it cannot end the literal
                result += next;
                i++;
            } else if ((state == STRING && c == '"') || (state == CHAR && c == '\'')) {
                state = CODE;
            }
        } else if (state == LINE_COMMENT) {
            if (c == '\n') {
                result += c;
                state = CODE;
            }
        } else {  // BLOCK_COMMENT
            if (c == '*' && next == '/') {
                result += ' ';
                state = CODE;
                i++;
            }
        }
    }
    return result;
}
