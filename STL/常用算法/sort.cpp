//
// Created by Macbook on 2026/1/2.
//
#include <vector>

#include "iostream"
using namespace std;

class MyPrint {
public:
    void operator()(int val) {
        cout << val << " ";
    }
};

void test() {
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),MyPrint());
    cout << endl;
    // 内建函数对象
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),MyPrint());
}

int main() {
    test();
    return 0;
}

