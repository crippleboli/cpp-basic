//
// Created by Macbook on 2026/1/2.
//
#include <vector>

#include "iostream"
using namespace std;


void test() {
    vector<int>v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    //相邻重复元素
    v.push_back(3);
    v.push_back(3);

    vector<int>::iterator pos = adjacent_find(v.begin(),v.end());
    if (pos == v.end()) {
        cout << "无相邻重复元素" << endl;
    }else {
        cout << "相邻重复元素中的第一个是："<<*pos << endl;
    }

}

int main() {
    test();
    return 0;
}


