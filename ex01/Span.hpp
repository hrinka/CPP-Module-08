#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>  // 例外処理
#include <algorithm>  // std::min_element, std::max_element, std::sort
#include <iterator>   // std::distance

class Span {
public:
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int number);
    template <typename InputIterator>
    // void addRange(InputIterator begin, InputIterator end);
    //     template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end) {
        if (std::distance(begin, end) + numbers_.size() > maxSize_) {
            throw std::out_of_range("Adding range exceeds the maximum capacity of Span");
        }
        numbers_.insert(numbers_.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;

private:
    unsigned int maxSize_;
    std::vector<int> numbers_;
};

#endif
