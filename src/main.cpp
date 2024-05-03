#include <iostream>
#include "core/orora.hpp"
#include "pipeline/hello_toc.hpp"
#include "pmc/pmc.h"
#include <vector>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

using namespace std;

vector<int> getVec() {
    vector<int> a = {1, 2, 3};
    cout << &a << endl;
    // E.g. 0x7ffd80dde6d0
    return a;
}

vector<int> getVec2() {
    return getVec();
}

pcl::PointCloud<pcl::PointXYZ> getPC() {
    pcl::PointCloud<pcl::PointXYZ> pc;
    pc.points.push_back({1.0, 2.0, 3.0});
    cout << &pc << endl;
    return pc;
}


int main() {
    orora::core::sayHello();
    orora::pipeline::sayTargetOrientedCMake();
    std::cout << "Welcome URL" << std::endl;

    return 0;
}
