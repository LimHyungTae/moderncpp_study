#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::vector<int> dst;
    dst.reserve(src.size());
    std::copy_if(src.begin(), src.end(), std::back_inserter(dst), [](int x) { return x % 2 == 0; });

    // 출력: 2 4
    for (auto i : dst) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
