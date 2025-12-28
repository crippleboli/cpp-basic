//
// Created by Macbook on 2025/12/28.
//
#include <deque>

#include "iostream"
using namespace std;


void test() {
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);

    // 300 200 100 10 20 30
    for (int i=0;i<d1.size();i++) {
        cout << d1[i] << " ";
    }
    cout << endl;
    for (int i=0;i<d1.size();i++) {
        cout << d1.at(i) << " ";
    }
    cout << endl;
    cout << "第一个元素："<<d1.front() << endl;
    cout << "第一个元素："<<d1.back() << endl;

}

int main() {
    test();
    return 0;
}
