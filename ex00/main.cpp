#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main() {
    // ベクトルのテスト
    std::vector<int> vec;
    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i);
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "Value found in vector: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 15);
        std::cout << "Value found in vector: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // リストのテスト
    std::list<int> lst;
    for (int i = 1; i <= 10; ++i) {
        lst.push_back(i);
    }

    try {
        std::list<int>::iterator it = easyfind(lst, 3);
        std::cout << "Value found in list: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(lst, 11);
        std::cout << "Value found in list: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
