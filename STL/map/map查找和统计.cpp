//
// Created by Macbook on 2025/12/30.
//
#include <map>

#include "iostream"
using namespace std;


void test() {
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int>::iterator pos = m.find(3);
    if (pos!= m.end()) {
        cout << (*pos).first << endl;
    }else {
        cout << "查找失败" << endl;
    }

    // 只可能为0/1
    int num = m.count(3);
    cout << "3的数量为"<<num << endl;

}

int main() {
    test();
    return 0;
}

