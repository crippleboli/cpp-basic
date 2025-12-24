//
// Created by Macbook on 2025/12/24.
//
#include <vector>

#include "iostream"
using namespace std;


void test() {
    vector<int> v1;
    for (int i=0;i<10;i++) {
        v1.push_back(i);
    }
    // []
    for (int i=0;i<10;i++) {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // at
    for (int i=0;i<10;i++) {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    // 第一个
    cout<< v1.front() <<endl;
    // 最后一个
    cout << v1.back() << endl;
}

int main() {
    test();
    return 0;
}

