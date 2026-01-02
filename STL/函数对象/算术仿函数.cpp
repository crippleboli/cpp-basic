//
// Created by Macbook on 2025/12/30.
//
#include "iostream"
using namespace std;


void test() {
    negate<int>n;
    cout << n(50) << endl;
    plus<int> p;
    cout << p(10,20) << endl;
}

int main() {
    test();
    return 0;
}

