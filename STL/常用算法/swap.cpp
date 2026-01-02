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
class Greater25 {
public:
    bool operator()(int val) {
        return val>25;
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

    vector<int>v2;
    for (int i = 0; i < 10; ++i) {
        v2.push_back(i);
    }

    swap(v,v2);

    for_each(v.begin(),v.end(),MyPrint());
    cout << endl;
    for_each(v2.begin(),v2.end(),MyPrint());
    cout << endl;

}

int main() {
    test();
    return 0;
}

