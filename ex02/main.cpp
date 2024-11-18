#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    // MutantStackのテスト
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "MutantStack contents: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // const_iteratorを使用して要素を出力
    std::cout << "MutantStack contents (using const_iterator): ";
    for (MutantStack<int>::const_iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // reverse_iteratorを使用して要素を出力
    std::cout << "MutantStack contents (using reverse_iterator): ";
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // const_reverse_iteratorを使用して要素を出力
    std::cout << "MutantStack contents (using const_reverse_iterator): ";
    for (MutantStack<int>::const_reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // std::listで同様の動作を確認
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    lst.pop_back();
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::cout << "List contents: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // const_iteratorを使用して要素を出力
    std::cout << "List contents (using const_iterator): ";
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // reverse_iteratorを使用して要素を出力
    std::cout << "List contents (using reverse_iterator): ";
    for (std::list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // const_reverse_iteratorを使用して要素を出力
    std::cout << "List contents (using const_reverse_iterator): ";
    for (std::list<int>::const_reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    return 0;
}
