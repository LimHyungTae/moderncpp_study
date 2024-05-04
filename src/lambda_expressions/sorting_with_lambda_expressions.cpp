#include <iostream>
#include <vector>
#include <algorithm>

// 비교 함수 정의
bool compare(int a, int b) {
  return a > b;  // 내림차순 정렬을 위해 'a'가 'b'보다 클 때 true 반환
}

int main() {
  /**
   * Case A. Original Sorting with `compare` function
   */
  // 정렬할 벡터
  std::vector<int> numbers = {4, 1, 3, 9, 7, 5, 8};

  // std::sort 함수 사용, 비교 함수로 'compare' 전달
  std::sort(numbers.begin(), numbers.end(), compare);

  // 정렬된 벡터 출력
  std::cout << "Sorted in descending order: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;


  /**
   * Case B. Sorting with Lambda expressions
   */
  std::vector<int> numbers2 = {4, 1, 3, 9, 7, 5, 8};

  std::sort(numbers2.begin(), numbers2.end(), [](int a, int b) { return a > b; });

  // 정렬된 벡터 출력
  std::cout << "Sorted in descending order: ";
  for (int num : numbers2) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::vector<int> numbers3 = {4, 1, 3, 9, 7, 5, 8};
  /**
   * Case C. Sorting with the named function by Lambda expressions
   */
  auto decending_order = [](int a, int b) { return a > b; };
  std::sort(numbers3.begin(), numbers3.end(), decending_order);

  std::cout << "Sorted in descending order: ";
  for (int num : numbers3) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
