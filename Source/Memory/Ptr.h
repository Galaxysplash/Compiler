#pragma once

#include <type_traits>

template <typename T>
concept Class = std::is_class_v<T>;

template <Class T>
struct Ptr {

};
