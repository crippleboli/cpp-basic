//
// Created by Macbook on 2025/12/30.
//
#include <set>

#include "iostream"
using namespace std;


void test() {
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    //  获取30的迭代器
    set<int>::iterator pos =s1.find(300);

    if (pos!=s1.end()) {
        cout << "找到" <<*pos<< endl;
    }else {
        cout << "未找到" << endl;
    }

    int num = s1.count(30);
    cout << num << endl;
}

int main() {
    test();
    return 0;
}

