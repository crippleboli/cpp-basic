//
// Created by Macbook on 2026/1/2.
//
#include <vector>

#include "iostream"
using namespace std;


void test() {
    vector<int>v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    // 必须有序序列
    bool ret = binary_search(v.begin(),v.end(),9);
    if (ret){ cout << "查找成功" << endl;}else{cout << "查找失败" << endl;}
}

int main() {
    test();
    return 0;
}

