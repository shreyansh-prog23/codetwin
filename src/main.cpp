#include <fstream>
#include <iostream>
#include <string>

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

    std::string line;
    int count = 0;
    while (std::getline(in, line)) count++;

    std::cout << count << " lines\n";
    return 0;
}
