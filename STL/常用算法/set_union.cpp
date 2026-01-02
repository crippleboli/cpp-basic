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
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
        v2.push_back(i+5);
    }
    vector<int> target;
    target.resize(v1.size()+v2.size());

    vector<int>::iterator it = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),target.begin());
    for_each(target.begin(),it,MyPrint());


}

int main() {
    test();
    return 0;
}

