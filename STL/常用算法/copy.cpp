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
    vector<int>v;
    for (int i = 0; i < 10; ++i) {
        v .push_back(i);
    }
    for_each(v.begin(),v.end(),MyPrint);
    cout << endl;
    vector<int>v2;
    v2.resize(v.size());
    copy(v.begin(),v.end(),v2.begin());
    for_each(v2.begin(),v2.end(),MyPrint);

}

int main() {
    test();
    return 0;
}

