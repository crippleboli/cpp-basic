//
// Created by Macbook on 2025/12/30.
//
#include <map>

#include "iostream"
using namespace std;

void printMap(map<int,int> &m) {
    for (map<int,int>::iterator it=m.begin();it!=m.end();it++) {
        cout << it->first<<" "<<it->second << endl;
    }
}

void test() {
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    if (m.empty()) {
        cout << "为空" << endl;
    }else {
        cout << "不为空" << endl;
        cout<<m.size()<<endl;
    }

    map<int,int>m2;
    m2.insert(pair<int,int>(4,40));
    m2.insert(pair<int,int>(5,50));
    m2.insert(pair<int,int>(6,60));
    swap(m,m2);
    printMap(m);
    printMap(m2);
}

int main() {
    test();
    return 0;
}

