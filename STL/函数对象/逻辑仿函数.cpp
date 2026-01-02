//
// Created by Macbook on 2025/12/31.
//
#include <vector>

#include "iostream"
using namespace std;


void test() {
    vector<int> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for (vector<int>::iterator it = v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
    }
    cout << endl;

    vector<int> v2;
    v2.resize(v.size());
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    for (vector<int>::iterator it = v2.begin();it!=v2.end();it++) {
        cout<<*it<<" ";
    }
    cout << endl;
}

int main() {
    test();
    return 0;
}

