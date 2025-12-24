//
// Created by Macbook on 2025/12/22.
//

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void myPrint(int val) {
    cout << val << endl;
}

void test() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 遍历方式一
    vector<int>::iterator itBegin = v.begin(); // 起始迭代器 指向第一个元素
    vector<int>::iterator itEnd = v.end();     // 结束迭代器 指向最后一个的下一个位置

    while (itBegin!=itEnd) {
        cout << *itBegin << endl;
        itBegin++;
    }

    // 遍历方式二
    for (vector<int>::iterator it = v.begin();it!=v.end();it++) {
        cout <<*it<<" ";
    }

    // 遍历方式三 STL自带
    for_each(v.begin(),v.end(),myPrint);


}

int main() {
    test();
    return 0;
}

