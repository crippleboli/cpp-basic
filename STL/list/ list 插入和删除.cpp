//
// Created by Macbook on 2025/12/30.

#include <list>

#include "iostream"
using namespace std;


void printList(const list<int> &l) {
    for (list<int>::const_iterator it=l.begin();it!=l.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test() {
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    l.push_front(100);
    l.push_front(200);
    l.push_front(300);
    printList(l);

    l.pop_back();
    printList(l);

    l.pop_front();
    printList(l);

    list<int>::iterator it =l.begin();
    l.insert(++it,10000);
    printList(l);

    it=l.begin();
    l.erase(it);
    printList(l);

    l.remove(100);
    printList(l);

}

int main() {
    test();
    return 0;
}

