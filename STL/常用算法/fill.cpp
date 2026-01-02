//
// Created by Macbook on 2026/1/2.
//
#include <numeric>
#include <vector>

#include "iostream"
using namespace std;

void MyPrint(int val) {
    cout << val << " ";
}

void test() {
    vector<int> v;
    v.resize(10);
    fill(v.begin()+2,v.begin()+5,888);
    for_each(v.begin(),v.end(),MyPrint);

}

int main() {
    test();
    return 0;
}

