//
// Created by Macbook on 2025/12/31.
//
#include <vector>
#include "algorithm"
#include "iostream"
using namespace std;

void print01(int val) {
    cout << val << " ";
    cout << endl;
}

class print02 {
public:
    void operator()(int val){
        cout << val << " ";
        cout << endl;
    }
};

void test() {
    vector<int>v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    //for_each(v.begin(),v.end(),print01);
    for_each(v.begin(),v.end(), print02());
}

int main() {
    test();
    return 0;
}

