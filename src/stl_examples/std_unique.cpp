#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5};
    auto new_end = std::unique(v.begin(), v.end());
    v.erase(new_end, v.end());
    for (auto i : v) {
        std::cout << i << " ";
    }
}
// 출력: 1 2 3 4 5
