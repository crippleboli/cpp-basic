//
// Created by Macbook on 2025/12/30.
//
#include <set>

#include "iostream"
using namespace std;


void test() {
    set<int> s;
    pair <set<int>::iterator,bool> ret = s.insert(10);
    if (ret.second) {
        cout << "第一次插入成功" << endl;
    }else {
        cout << "第一次插入失败" << endl;
    }

    ret = s.insert(10);
    if (ret.second) {
        cout << "第二次插入成功" << endl;
    }else {
        cout << "第二次插入失败" << endl;
    }


    // 允许插入多个重复
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);

    for (multiset<int> :: iterator it = ms.begin();it!= ms.end();it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout<<ms.count(10);
}

int main() {
    test();
    return 0;
}

