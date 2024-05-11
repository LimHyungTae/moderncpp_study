#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    for (int i = 0; i < v.size(); ++i) {
        v[i] *= 2;
    }

    // 출력: 2 4 6 8 10
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    v = {1, 2, 3, 4, 5};
    std::for_each(v.begin(), v.end(), [](int &x) { x *= 2; });

    // 출력: 2 4 6 8 10
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
