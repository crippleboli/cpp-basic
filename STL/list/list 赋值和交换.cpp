//
// Created by Macbook on 2025/12/30.
//
#include <list>

#include "iostream"
using namespace std;

void printList(const list<int> &l) {
    for (list<int>::const_iterator it = l.begin();it!= l.end();it++) {
        cout << *it << " ";
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

    // =
    list<int>l2 =l1;

    // assign
    list<int>l3;
    l3.assign(l1.begin(),l1.end());

    //  assign
    list<int>l4;
    l4.assign(8,9);

    printList(l2);
    printList(l3);
    printList(l4);

    list<int> l5;
    l5.assign(8,8);
    l1.swap(l5);
    printList(l1);
    printList(l5);

}

int main() {
    test();
    return 0;
}

