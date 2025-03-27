#pragma once

#include <cstdint>

namespace Nodes {
    class Node abstract {
    public:
        size_t line;
        uint16_t column;
    };
} // Node
