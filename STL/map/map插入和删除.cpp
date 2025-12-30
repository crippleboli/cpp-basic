//
// Created by Macbook on 2025/12/30.
//
#include <map>

#include "iostream"
using namespace std;

void printMap(map<int,int> &m) {
    for (map<int,int>::iterator it = m.begin();it!= m.end();it++) {
        cout << it->first<<" "<<it->second << endl;
    }
}

void test() {
    map<int,int> m;
    m.insert(pair<int,int>(1,10));

    m.insert(make_pair(2,20));

    m.insert(map<int,int>::value_type(3,30));

    m[4] =40;

    // 访问时自动创建5，0
    //cout<<m[5]<<endl;

    printMap(m);

    cout << "-------" << endl;
    m.erase(m.begin());
    printMap(m);

    cout << "-------" << endl;
    m.erase(3); // 按照key值删除
    printMap(m);

}

int main() {
    test();
    return 0;
}

