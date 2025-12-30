//
// Created by Macbook on 2025/12/30.
//
#include <map>

#include "iostream"
using namespace std;


class myCompare {
public:
    bool operator()(int a,int b)const {
        return a>b;
    }

};
void test() {
    map<int,int,myCompare>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(5,50));

    for (map<int,int,myCompare>::iterator it=m.begin();it!=m.end();it++) {
        cout << (*it).first<<" "<<(*it).second<< endl;
    }
}

int main() {
    test();
    return 0;
}

