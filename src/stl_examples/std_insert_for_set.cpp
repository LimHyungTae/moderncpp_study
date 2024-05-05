#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    // 두 개의 unordered_set 초기화
    std::unordered_set<std::string> set1 = {"apple", "banana", "mango"};
    std::unordered_set<std::string> set2 = {"banana", "orange", "grape"};

    // set2의 모든 요소를 set1에 병합
    set1.insert(set2.begin(), set2.end());

    // 병합된 unordered_set의 내용을 출력
    // 출력: Combined set contents: grape apple orange banana mango
    std::cout << "Combined set contents: ";
    for (const std::string& fruit : set1) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    return 0;
}
