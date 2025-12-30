//
// Created by Macbook on 2025/12/30.
//
#include <map>

#include "iostream"
using namespace std;


void printMap(map<int, int> &m) {
    for (map<int,int>::iterator it=m.begin();it!=m.end();it++) {
        cout << "key:"<<it->first<<" "<<"value:"<<it->second <<endl;;
    }
}


void test() {
    map<int,int>m1;

    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(4,40));
    printMap(m1);

    // 拷贝构造
    map<int,int>m2(m1);
    map<int,int>m3;
    m3=m2;
    printMap(m2);
    printMap(m3);

}

int main() {
    test();
    return 0;
}

