#include <iostream>
#include <vector>

int main() {
    // 원래의 벡터 초기화
    std::vector<int> original = {1, 2, 3, 4, 5};

    // 이동 생성자를 사용하여 'original'의 내용을 'moved_to'로 이동
    std::vector<int> moved_to = std::move(original);

    // 'original'과 'moved_to'의 내용 출력
    // 출력: Original vector:
    std::cout << "Original vector: ";
    for (auto& item : original) {
        std::cout << item << " ";
    }

    // 출력: Moved to vector: 1 2 3 4 5
    std::cout << "\nMoved to vector: ";
    for (auto& item : moved_to) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    /** 출력: Size: 0
     *       Capacity: 0
     **/
    std::cout << "Size: " << original.size() << std::endl;
    std::cout << "Capacity: " << original.capacity() << std::endl;

    return 0;
}
