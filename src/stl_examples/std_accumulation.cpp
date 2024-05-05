#include <numeric>
#include <vector>
#include <iostream>


int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    int sum = std::accumulate(v.begin(), v.end(), 0);

    // 출력: Sum: 15
    std::cout << "Sum: " << sum << std::endl;
}
