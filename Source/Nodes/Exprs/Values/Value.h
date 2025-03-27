#pragma once

#include <Nodes/Exprs/Expr.h>
#include <Nodes/Exprs/Values/Enums/ValueType.h>


namespace Nodes {
    class Value : public Expr {
    public:
        ValueType type;

        Value();

        explicit Value(const ValueType &type);
    };
} // Nodes
