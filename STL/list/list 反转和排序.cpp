//
// Created by Macbook on 2025/12/30.
//
#include <list>

#include "iostream"
using namespace std;

bool myCompare(int a,int b) {
    return a>b;
}


void printList(const list<int> &l) {
    for (list<int>::const_iterator it = l.begin();it!= l.end();it++) {
        cout << *it<<" ";
    }
    cout << endl;

}

void test() {
    list<int> l;
    l.push_back(20);
    l.push_back(10);
    l.push_back(50);
    l.push_back(40);
    l.push_back(30);
    printList(l);
    l.reverse();
    printList(l);
    l.sort();
    printList(l);
    l.sort(myCompare);
    printList(l);

}

int main() {
    test();
    return 0;
}


