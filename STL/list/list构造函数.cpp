//
// Created by Macbook on 2025/12/28.
//
#include <list>

#include "iostream"
using namespace std;


void printList(const list<int> l1) {
    for (list<int>::const_iterator it = l1.begin();it!=l1.end();it++) {
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

    // 拷贝
    list<int> l2(l1);

    // 范围
    list<int> l3(l1.begin(),l1.end());

    // 重复
    list<int> l4(8,9);
    printList(l2);
    printList(l3);
    printList(l4);

}

int main() {
    test();
    return 0;
}

