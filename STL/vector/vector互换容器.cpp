//
// Created by Macbook on 2025/12/24.
//
#include <vector>

#include "iostream"
using namespace std;

void printVector(vector<int> v) {
    for (int i=0;i<v.size();i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

// 测试
void test() {
    vector<int> v1;
    vector<int> v2;

    for (int i=0;i<10;i++) {
        v1.push_back(i);
    }

    for (int i=10;i>0;i--) {
        v2.push_back(i);
    }
    cout << "交换前" << endl;
    printVector(v1);
    printVector(v2);
    cout << "交换后" << endl;
    swap(v1,v2);
    printVector(v1);
    printVector(v2);
}

// 用途
void func() {
    vector<int> v;
    for (int i=0;i<10000;i++) {
        v.push_back(i);
    }
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    // 重新变小
    v.resize(3);
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    //
    vector<int>(v).swap(v);
    cout << v.capacity() << endl;
    cout << v.size() << endl;

}

int main() {
    //test();
    func();
    return 0;
}

