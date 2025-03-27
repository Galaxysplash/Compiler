#include "Filesystem.h"

#include <cstdlib>
#include <fstream>
#include <iostream>

const char *Filesystem::fetchContent(const int argc, const char *argv[]) {
    if (argc < 2) {
        std::cerr << "too few arguments" << std::endl;
        exit(64);
    }
    if (argc > 2) {
        std::cerr << "too many arguments" << std::endl;
        exit(64);
    }

    return nullptr;
}

const char *Filesystem::readFile(const char *path) {
    std::ifstream stream{path};
    const char []

    if (!stream.is_open()) {
        std::cerr << "could not open file" << std::endl;
        exit(34);
    }

    stream.read()

    return nullptr;
}
