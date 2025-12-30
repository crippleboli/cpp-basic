//
// Created by Macbook on 2025/12/30.
//
#include <set>
#include "iostream"
using namespace std;


void printSet(const set<int> &s) {
    for (set<int>::iterator it=s.begin();it!=s.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test() {
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    if (s1.empty()) {
        cout << "为空" << endl;
    }else {
        cout << "不为空" << endl;
        cout << s1.size() << endl;
    }

    set<int>s2;
    s2.insert(100);
    s2.insert(300);
    s2.insert(200);
    s2.insert(400);

    printSet(s1);
    printSet(s2);
    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}

int main() {
    test();
    return 0;
}

