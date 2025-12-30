//
// Created by Macbook on 2025/12/30.
//
#include <list>

#include "iostream"
using namespace std;

void printList(const list<int> &l) {
    for (list<int>::const_iterator it=l.begin();it!=l.end();it++) {
        cout << *it<<" ";
    }
    cout << endl;
}

void test() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);
    if (!l1.empty()) {
        cout << "不为空" << endl;
        cout<<l1.size()<<endl;
    }

    l1.resize(10);
    printList(l1);
    l1.resize(2);
    printList(l1);
}

int main() {
    test();
    return 0;
}

