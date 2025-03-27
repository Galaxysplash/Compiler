#pragma once

#include <Nodes/Exprs/Expr.h>
#include <Nodes/Exprs/Ops/Enums/OpType.h>

namespace Nodes {
    class Op abstract : public Expr {
    public:
        OpType type;

        Op();

        explicit Op(const OpType &type);
    };
} // Nodes
