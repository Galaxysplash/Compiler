#pragma once


class Filesystem {
public:
    static const char *fetchContent(const int argc, const char *argv[]);

private:
    static const char *readFile(const char *path);
};
