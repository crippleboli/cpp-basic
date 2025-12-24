//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;

// 父类
template<class T>
class Base {
public:
    T m;
};
// 子类1
class Son:public Base<int> {
public:
};

// 子类2  可以依旧是类模版 指定后 T1对应子类 T2对应父类
template<class T1,class T2>
class Son2:public Base<T1> {
    T1 obj;
};

int main() {
    return 0;
}

