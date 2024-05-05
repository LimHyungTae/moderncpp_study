#include <iostream>
#include <vector>

std::vector<int> createVector() {
    return std::vector<int>{1, 2, 3, 4, 5};
}

int main() {
    std::vector<int> vec = createVector();  // createVector의 반환값은 rvalue
    std::vector<int> vec2 = std::move(createVector());

    std::cout << "vec: " << &vec << std::endl;
    std::cout << "vec2: " << &vec2 << std::endl;
    return 0;
}
