#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

#include <iostream>
#include <vector>

using namespace std;

vector<int> getVec() {
    vector<int> a = {1, 2, 3};
    cout << "Address of vec in function: " << &a << endl;
    return a;
}

vector<int> getVec2() { return getVec(); }

pcl::PointCloud<pcl::PointXYZ> getPC() {
    pcl::PointCloud<pcl::PointXYZ> pc;
    pc.points.emplace_back(1.0, 2.0, 3.0);
    cout << "Address of pc in function: " << &pc << endl;
    return pc;
}

pcl::PointCloud<pcl::PointXYZ>::Ptr getPCPtr() {
    pcl::PointCloud<pcl::PointXYZ>::Ptr ptr(new pcl::PointCloud<pcl::PointXYZ>());
    ptr->points.emplace_back(-100.0, -200.0, -300.0);
    cout << "ptr in function: " << ptr << endl;
    return ptr;
}

int main() {
    cout << "Return value optimization (RVO) test" << endl;
    vector<int> b = getVec();
    cout << "Address of vec in main: " << &b << endl;
    // The printed address is same with `getVec()`
    pcl::PointCloud<pcl::PointXYZ> pc = getPC();
    cout << "Address of pc in main: " << &pc << endl;
    // The printed address is same with `getPC()`

    bool is_a = true;
    const auto& vec_test = [&]() -> vector<double> {
        vector<double> aa = {1.0, 2.0, 3.0};
        vector<double> bb = {100.0, 200.0, 300.0};
        if (is_a) return aa;
        return bb;
    }();

    cout << vec_test[0] << ", " << vec_test[1] << ", " << vec_test[2] << "\n";

    pcl::PointCloud<pcl::PointXYZ>::Ptr ptr(new pcl::PointCloud<pcl::PointXYZ>());
    cout << "ptr original: " << ptr << endl;
    // Original address is different to the below two ones
    ptr = getPCPtr();
    cout << "ptr in main: " << ptr << endl;
    cout << ptr->points[0].x << ", " << ptr->points[0].y << ", " << ptr->points[0].z << endl;

    return 0;
}
