//
// Created by Macbook on 2025/12/30.
//
#include <set>

#include "iostream"
using namespace std;

class MyCompare {
public:
    bool operator()(int a,int b) {
        return a>b;
    }
};

void test() {
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    for (set<int>::iterator it =s1.begin();it!=s1.end();it++) {
        cout<<*it<<" ";
    }
    cout << endl;

    // 从大到小
    set<int,MyCompare> s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(40);

    for (set<int,MyCompare>::iterator it =s2.begin();it!= s2.end();it++) {
        cout << *it << " ";
    }
    cout << endl;

}

int main() {
    test();
    return 0;
}

