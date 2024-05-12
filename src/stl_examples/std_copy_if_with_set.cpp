#include <algorithm>
#include <vector>
#include <set>
#include <iostream>

int main() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::set<float> dst = {1.5, 3.2};

    // Error!
    // std::copy_if(src.begin(), src.end(), std::back_inserter(dst), [](int x) { return x % 2 == 0; });

    std::copy_if(src.begin(), src.end(), std::inserter(dst, dst.begin()), [](int x) { return x % 2 == 0; });

    // 출력: 1.5 2 3.2 4
    for (auto i : dst) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
