//
// Created by Macbook on 2026/1/2.
//
#include <vector>

#include "iostream"
using namespace std;

void MyPrint(int val) {
    cout<<val<< " ";
}

void test() {
    vector<int>v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    vector<int>v2;
    for (int i = 1; i <= 10; ++i) {
        v2.push_back(i);
    }

    vector<int> target;
    target.resize(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),target.begin());
    for_each(target.begin(),target.end(),MyPrint);

}

int main() {
    test();
    return 0;
}

