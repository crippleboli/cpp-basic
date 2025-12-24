//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;

void myPrint(int a,int b) {
    cout << "调用普通函数" << endl;
}

template<typename T>
void myPrint(T a,T b) {
    cout << "调用函数模版" << endl;
}

template<typename T>
void myPrint(T a,T b,T c) {
    cout << "函数模版的重载调用" << endl;
}

void test1() {
    int a=10;
    int b=20;
    myPrint(a,b);

    // 强制调用函数模版
    myPrint<>(a,b);

    // 调用重载的模版
    myPrint(a,b,10);

    // 调用更匹配的
    char c1 ='a';
    char c2 ='b';
    myPrint(c1,c2);
}

int main() {
    test1();
    return 0;
}

