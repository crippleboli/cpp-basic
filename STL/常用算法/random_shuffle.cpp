//
// Created by Macbook on 2026/1/2.
//
#include <vector>

#include "iostream"
using namespace std;

void MyPrint(int val) {
    cout << val << " ";
}


void test() {
    vector<int>v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),MyPrint);
}

int main() {
    test();
    return 0;
}

