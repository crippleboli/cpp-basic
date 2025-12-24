//
// Created by Macbook on 2025/12/24.
//
#include <vector>

#include "iostream"
using namespace std;


void test() {
    vector<int> v;
    int flag =0;        // 动态扩展次数
    int *p;
    v.reserve(10000); // 提前预留空间
    for (int i=0;i<10000;i++) {
        v.push_back(i);
        if (p!=&v[0]) {
            p=&v[0];
            flag++;
        }
    }
    cout << flag<<endl;


}

int main() {
    test();
    return 0;
}

