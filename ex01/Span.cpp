#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <limits>  // std::numeric_limits

Span::Span(unsigned int N) : maxSize_(N) {}

Span::Span(const Span& other) : maxSize_(other.maxSize_), numbers_(other.numbers_) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        maxSize_ = other.maxSize_;
        numbers_ = other.numbers_;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (numbers_.size() >= maxSize_) {
        throw std::out_of_range("Span is already full");
    }
    numbers_.push_back(number);
}

// template <typename InputIterator>
// void Span::addRange(InputIterator begin, InputIterator end) {
//     if (std::distance(begin, end) + numbers_.size() > maxSize_) {
//         throw std::out_of_range("Adding range exceeds the maximum capacity of Span");
//     }
//     numbers_.insert(numbers_.end(), begin, end);
// }

int Span::shortestSpan() const {
    if (numbers_.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }

    std::vector<int> sortedNumbers = numbers_;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int shortest = std::numeric_limits<int>::max();
    
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        int diff = sortedNumbers[i] - sortedNumbers[i - 1];
        if (diff < shortest) {
            shortest = diff;
        }
    }
    return shortest;
}

int Span::longestSpan() const {
    if (numbers_.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }
    int minValue = *std::min_element(numbers_.begin(), numbers_.end());
    int maxValue = *std::max_element(numbers_.begin(), numbers_.end());
    return maxValue - minValue;
}
