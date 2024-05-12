#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto it = std::find_if(v.begin(), v.end(), [](int x) { return x > 3; });

    // 출력: First element greater than 3: 4
    if (it != v.end()) {
        std::cout << "First element greater than 3: " << *it << std::endl;
    }
}
