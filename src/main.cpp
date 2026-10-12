#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "tokenizer.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " file.cpp\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "Cannot open " << argv[1] << "\n";
        return 1;
    }

    std::stringstream buffer;
    buffer << in.rdbuf();

    std::cout << removeComments(buffer.str());
    return 0;
}
