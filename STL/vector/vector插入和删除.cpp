//
// Created by Macbook on 2025/12/24.
//
#include <vector>
#include "iostream"
using namespace std;

void printVector(vector<int> v) {
    for (vector<int>::iterator it = v.begin();it!= v.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}


void test() {

    vector<int> v1;
    // 尾部插入
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    vector<int> v2 (v1);
    printVector(v1);

    // 尾部删除
    v1.pop_back();
    printVector(v1);

    // 插入
    v1.insert(v1.begin(),100);
    printVector(v1);

    // 多次插入
    v1.insert(v1.begin(),2,100);
    printVector(v1);

    // 删除
    v1.erase(v1.begin());\
    printVector(v1);

    // 全部删除
    v1.erase(v1.begin(),v1.end());
    printVector(v1);
    cout<<"------"<<endl;
    v2.clear();
    printVector(v2);
    cout<<"------"<<endl;
}

int main() {
    test();
    return 0;
}

