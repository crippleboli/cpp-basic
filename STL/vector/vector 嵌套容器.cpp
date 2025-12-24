//
// Created by Macbook on 2025/12/22.
//
#include <vector>

#include "iostream"
using namespace std;


void test() {
    vector<vector<int> > v;

    // 内层容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    // 填充内层容器
    for (int i=0;i<4;i++) {
        v1.push_back(i+1);  // v1:1-4
        v2.push_back(i+2);  // v2:2-6
        v3.push_back(i+3);  // v3:3-7
        v4.push_back(i+4);  // v4:4-8
    }

    // 填充内层容器
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    // 全部遍历  注意iterator是迭代器视为指针
    for (vector<vector<int> >::iterator it=v.begin();it!=v.end();it++) {
        for (vector<int>::iterator it2 = (*it).begin();it2!= (*it).end();it2++) {
            cout << *it2 << " ";
        }
        cout <<endl;
    }
}

int main() {
    test();
    return 0;
}

