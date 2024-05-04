#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

#include <iostream>
#include <vector>

using namespace std;

int main() {

  int c = 0;
  bool is_a = true;
  const auto& vec_test = [&]() -> vector<double> {
    ++c;
    vector<double> aa = {1.0, 2.0, 3.0};
    vector<double> bb = {100.0, 200.0, 300.0};
    if (is_a) return aa;
    return bb;
  }();

  return 0;
}
