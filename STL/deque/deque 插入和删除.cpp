//
// Created by Macbook on 2025/12/28.
//
#include <deque>

#include "iostream"
using namespace std;


void printDeque(const deque<int> &d) {
    for (deque<int>::const_iterator it=d.begin();it!=d.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test() {
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);

    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);

    d1.pop_back();
    printDeque(d1);

    d1.pop_front();
    printDeque(d1);
}

void test2() {
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);

    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);

    d1.insert(d1.begin(),1000);
    d1.insert(d1.begin(),3,8);
    printDeque(d1);

    d1.insert(d1.begin(),d1.begin(),d1.end());  // 重复一遍
    printDeque(d1);

    cout << "---------" << endl;
    d1.erase(d1.begin()+3);
    printDeque(d1);

    d1.erase(d1.begin(),d1.begin()+2);
    printDeque(d1);

    d1.clear();
    printDeque(d1);
}


int main() {
    test2();
    return 0;
}

