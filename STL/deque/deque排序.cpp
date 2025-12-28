//
// Created by Macbook on 2025/12/28.
//
#include <deque>

#include "iostream"
using namespace std;


void test() {
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);

    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);
    for (int i=0;i<d1.size();i++) {
        cout << d1.at(i) << " ";
    }
    cout << endl;

    sort(d1.begin(),d1.end());
    for (int i=0;i<d1.size();i++) {
        cout << d1.at(i) << " ";
    }
    cout << endl;


}

int main() {
    test();
    return 0;
}

