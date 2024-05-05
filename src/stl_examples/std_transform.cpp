#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::vector<int> dst;
    dst.resize(src.size() + 2, 0);
    std::transform(src.begin(), src.end(), dst.begin(), [](int x) { return x * x; });

    // 출력: 1 4 9 16 25 0 0
    for (auto i : dst) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::transform(dst.begin(), dst.end(), dst.begin(), [](int x) { return x * x; });
    // 출력: 1 16 81 256 625 0 0
    for (auto i : dst) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}