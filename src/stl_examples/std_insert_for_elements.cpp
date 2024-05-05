#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 4, 5};

    // 3을 vec[2] 위치에 삽입
    vec.insert(vec.begin() + 2, 3);

    // 출력: 1 2 3 4 5
    std::cout << "Vector after insertion: ";
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    // 100을 vec[0] 위치에 3번 삽입
    vec.insert(vec.begin(), 3, 100);

    // 출력: 100 100 100 1 2 3 4 5
    std::cout << "Vector after multiple insertions: ";
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
