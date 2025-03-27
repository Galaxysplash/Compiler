#include "Value.h"

namespace Nodes {
    Value::Value() : type(ValueType::NONE) {
    }

    Value::Value(const ValueType &type) : type(type) {
    }
} // Nodes
