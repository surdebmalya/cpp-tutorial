#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = v.begin();
    while (it != v.end()) {
        std::cout << *it << " ";
        ++it;
    }

    std::cout << std::endl;

    std::swap(v[0], v[v.size()-1]);
    it = v.begin();
    while (it != v.end()) {
        std::cout << *it << " ";
        ++it;
    }

    std::cout << std::endl;

    // sorting
    std::vector<int> k = {12,123,5,643,23,68,23,75,2};
    for (auto i:k)
        std::cout << i << " ";

    std::cout << std::endl;

    std::vector<int>::iterator itrk = k.begin();

    itrk = itrk+5;

    std::sort(k.begin(), itrk);

    for (auto i:k)
        std::cout << i << " ";

    std::cout << std::endl;
    return 0;
}