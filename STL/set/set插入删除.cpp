//
// Created by Macbook on 2025/12/30.
//

#include <list>

#include "iostream"
#include "set"
using namespace std;

void printSet(const set<int> &s) {
    for (set<int>::const_iterator it=s.begin();it!=s.end();it++) {
        cout<< *it <<" ";
    }
    cout<<endl;
}


void test() {
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1);

    // 删除
    s1.erase(s1.begin());
    printSet(s1);

    s1.erase(30);
    printSet(s1);

    s1.clear();
    printSet(s1);
}

int main() {
    test();
    return 0;
}

