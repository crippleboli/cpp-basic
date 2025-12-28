//
// Created by Macbook on 2025/12/28.
//
#include <deque>

#include "iostream"
using namespace std;

void printDeque(const deque<int> &d) {

    for (deque<int>::const_iterator it = d.begin();it!=d.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}



void test() {
    // 默认构造
    deque<int> d1;
    for (int i=0;i<10;i++) {
        d1.push_back(i);
    }
    printDeque(d1);

    deque<int> d2(d1.begin(),d1.end());
    printDeque(d2);

    deque<int> d3(10,100);
    printDeque(d3);

    // 拷贝构造
    deque<int> d4(d3);
    printDeque(d4);
}

int main() {
    test();
    return 0;
}

