#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::vector<int> dst;
    std::copy_if(src.begin(), src.end(), std::back_inserter(dst), [](int x) { return x % 2 == 0; });
    for (auto i : dst) {
        std::cout << i << " ";
    }
}
// 출력: 2 4
