//
// Created by Macbook on 2025/12/24.
//
#include <vector>

#include "iostream"
using namespace std;

void printVector(vector<int> v) {
    for (vector<int>::iterator it= v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test() {
    vector<int> v1;
    for (int i=0;i<10;i++) {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty()) {
        cout << "v1为空" << endl;
    }else {
        cout << "v1不为空" << endl;
        cout << v1.capacity() << endl;
        cout << v1.size() << endl;
    }

    // 重新指定大小
    v1.resize(20,2);
    printVector(v1);

    v1.resize(5);
    printVector(v1);

}

int main() {
    test();
    return 0;
}

