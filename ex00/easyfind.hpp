#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>  // std::find
#include <iterator>   // std::distance
#include <exception>  // std::exception
#include <iostream>   // std::cerr

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Value not found in the container");
    }
    return it;
}

#endif
