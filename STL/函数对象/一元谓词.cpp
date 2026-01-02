//
// Created by Macbook on 2025/12/30.
//
#include <vector>

#include "iostream"
using namespace std;

class GreaterFive {
public:
    // 一元谓词
    bool operator()(int val) {
        if (val>5) {
            return true;
        }
        return false;
    }

};

void test() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    // GreaterFive()匿名函数对象
    vector<int>:: iterator it = find_if(v.begin(),v.end(),GreaterFive());
    if (it == v.end()) {
        cout << "未找到" << endl;
    }else {
        cout << "找到第一个大于5的数字是："<<*it << endl;
    }

}

int main() {
    test();
    return 0;
}

