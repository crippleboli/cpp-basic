//
// Created by Macbook on 2025/12/30.
//
#include <list>

#include "iostream"
using namespace std;


void test() {
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    cout<<l.front()<<" ";
    cout << l.back() << endl;

    // 本质链表 不能随机访问
    list<int>::iterator it =l.begin();
    it++;
    // it = it +1; 不可以

}

int main() {
    test();
    return 0;
}

