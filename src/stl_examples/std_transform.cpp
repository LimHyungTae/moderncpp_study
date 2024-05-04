#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::vector<int> dst;
    dst.resize(src.size());
    std::transform(src.begin(), src.end(), dst.begin(), [](int x) { return x * x; });
    for (auto i : dst) {
        std::cout << i << " ";
    }
}
// 출력: 1 4 9 16 25