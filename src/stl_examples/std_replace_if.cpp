#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::replace_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }, 0);
    for (auto i : v) {
        std::cout << i << " ";
    }
}
// 출력: 1 0 3 0 5
