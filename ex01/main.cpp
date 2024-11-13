#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>  // std::rand, std::srand
#include <ctime>    // std::time

int main() {
    std::srand(std::time(0));  // ランダムなシード

    try {
        Span sp = Span(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        // 大量の数を追加してテスト
        Span largeSpan(10000);
        for (int i = 0; i < 10000; ++i) {
            largeSpan.addNumber(std::rand() % 100000);
        }

        std::cout << "Shortest span in largeSpan: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest span in largeSpan: " << largeSpan.longestSpan() << std::endl;

        // イテレータ範囲を使った追加のテスト
        std::vector<int> rangeVec;
        for (int i = 0; i < 1000; ++i) {
            rangeVec.push_back(std::rand() % 1000);
        }

        Span rangeSpan(1000);
        rangeSpan.addRange(rangeVec.begin(), rangeVec.end());
        std::cout << "Shortest span in rangeSpan: " << rangeSpan.shortestSpan() << std::endl;
        std::cout << "Longest span in rangeSpan: " << rangeSpan.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
