#include <iostream>
#include <string>

#include "../src/tokenizer.h"

static int failures = 0;

static void check(const std::string& name, const std::string& input, const std::string& expected) {
    std::string got = removeComments(input);
    if (got == expected) {
        std::cout << "PASS " << name << "\n";
    } else {
        failures++;
        std::cout << "FAIL " << name << "\n  expected: [" << expected << "]\n  got:      [" << got << "]\n";
    }
}

int main() {
    check("line comment", "int a = 1; // note\nint b;", "int a = 1; \nint b;");
    check("block comment", "int a; /* hi */ int b;", "int a;   int b;");
    check("multi-line block", "x /* a\nb\nc */ y", "x   y");
    check("// inside string", "s = \"http://x\";", "s = \"http://x\";");
    check("/* inside string", "s = \"a /* b */ c\";", "s = \"a /* b */ c\";");
    check("quote in char", "char c = '\"'; // q", "char c = '\"'; ");
    check("escaped quote", "s = \"say \\\"hi\\\" // no\"; // yes", "s = \"say \\\"hi\\\" // no\"; ");
    check("glued block", "a/**/b", "a b");
    check("trailing slash", "a /", "a /");

    std::cout << (failures == 0 ? "All tests passed\n" : "Some tests failed\n");
    return failures == 0 ? 0 : 1;
}
