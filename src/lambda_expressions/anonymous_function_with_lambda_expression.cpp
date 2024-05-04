#include <iostream>

using namespace std;

int main() {

  int c = 0;
//  []() { ++c;}(); // (x) It's wrong because 'c' is not defined nor captured
  [&]() { ++c;}();
  [&](int &d) { ++d;}(c);

  std::cout << c << std::endl;

  return 0;
}
