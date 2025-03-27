#include "Op.h"

namespace Nodes {
    Op::Op() : type(OpType::NONE) {
    }

    Op::Op(const OpType &type) : type(type) {
    }
} // Nodes
