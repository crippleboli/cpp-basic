//
// Created by Macbook on 2025/12/24.
//
#include <vector>

#include "iostream"
using namespace std;

void printVector(vector<int> nums) {
    for (vector<int>::iterator it = nums.begin();it!=nums.end();it++) {
        cout <<*it<<" ";
    }
    cout  << endl;
}

void test() {
    vector<int> v1;
    for (int i=0;i<10;i++) {
        v1.push_back(i);
    }
    //printVector(v1);

    // =
    vector<int> v2 =v1;
    printVector(v2);

    //assign
    vector<int> v3;
    v3.assign(v1.begin(),v1.end()); // 取值前开后闭
    printVector(v3);

    vector<int> v4;
    v4.assign(10,8);
    printVector(v4);
}

int main() {
    test();
    return 0;
}
