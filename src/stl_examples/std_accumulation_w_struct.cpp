#include <numeric>
#include <vector>
#include <iostream>

struct MyStruct {
    int x = 0;
};
int main() {
    MyStruct s1, s2, s3, s4, s5;
    s1.x = 19;
    s2.x = 21;
    s3.x = 30;
    s4.x = 28;
    s5.x = 3;
    std::vector<MyStruct> v = {s1, s2, s3, s4, s5};
    const MyStruct& max_struct = std::accumulate(v.begin(), v.end(), v[0], [](MyStruct& a, MyStruct& b) {
        return a.x > b.x ? a : b;
    });

    // 출력: Sum: 30
    std::cout << "Max value of the max struct: " << max_struct.x << std::endl;
}
