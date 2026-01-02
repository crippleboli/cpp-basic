//
// Created by Macbook on 2026/1/2.
//
#include <numeric>
#include <vector>

#include "iostream"
using namespace std;

void test() {
    vector<int> v;
    for (int i = 0; i <=100; ++i) {
        v.push_back(i);
    }
    int sum = accumulate(v.begin(),v.end(),0);
    cout << sum <<endl;

}

int main() {
    test();
    return 0;
}

