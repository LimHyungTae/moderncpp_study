#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    std::vector<int> vec3 = {7, 8, 9};
    std::vector<int> vec4 = {10, 11, 12};

    // vec1의 끝에 vec2의 요소들을 삽입
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());

    // vec1의 끝에 vec3의 요소들을 삽입
    vec1.insert(vec1.end(), vec3.begin(), vec3.end());

    // 출력: Combined vector: 1 2 3 4 5 6 7 8 9
    std::cout << "Combined vector: ";
    for (int elem : vec1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // insert 함수를 사용하여 vec4의 요소들을 vec1의 끝에 '이동'시킬 수도 있음!
    vec1.insert(vec1.end(), std::make_move_iterator(vec4.begin()), std::make_move_iterator(vec4.end()));
    vec4.clear();

    // 출력: Combined vector: 1 2 3 4 5 6 7 8 9 10 11 12
    std::cout << "After move iterator: ";
    for (int elem : vec1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
