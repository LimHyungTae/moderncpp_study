#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6};
    auto new_end = std::remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    v.erase(new_end, v.end());
    for (auto i : v) {
        std::cout << i << " ";
    }
}
// 출력: 1 3 5
