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

void test() {
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);
    for_each(v.begin(),v.end(),MyPrint());
    cout << endl;
    replace(v.begin(),v.end(),40,1000);
    for_each(v.begin(),v.end(),MyPrint());

}

int main() {
    test();
    return 0;
}

