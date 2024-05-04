#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto mid = std::partition(v.begin(), v.end(), [](int x) { return x % 2 != 0; });
    std::cout << "Odds: ";
    for (auto it = v.begin(); it != mid; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\nEvens: ";
    for (auto it = mid; it != v.end(); ++it) {
        std::cout << *it << " ";
    }
}
// 출력:
// Odds: 9 1 3 5 7 
// Evens: 8 10 6 4 2
