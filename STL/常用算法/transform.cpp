//
// Created by Macbook on 2026/1/2.
//
#include <vector>
#include "algorithm"
#include "iostream"
using namespace std;

class Transform {
public:
    int operator()(int val) {
        return val;
    }
};

class Print {
public:
    void operator()(int val) {
        cout << val<<endl;
    }
};

void test() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    vector<int> target;
    target.resize(v.size());
    transform(v.begin(),v.end(),target.begin(),Transform());
    for_each(target.begin(),target.end(),Print());
}

int main() {
    test();
    return 0;
}

