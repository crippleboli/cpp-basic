//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
#include "string"
using namespace std;

class Person {
public:
    Person(string name,int age) {
        this->name=name;
        this->age=age;
    }

    string name;
    int age;
};

template <typename T>
bool myCompare(T &a,T &b) {
    if (a==b) {
        return true;
    }else {
        return false;
    }
}

// 1.重载Person运算符解决
// 2.具体化模版的Person版本
template<>
bool myCompare(Person &p1,Person &p2) {
    if (p1.age==p2.age&& p1.name==p2.name) {
        return true;
    }else {
        return false;
    }
}


void test() {
    int a=10;
    int b=20;

    bool ret = myCompare(a,b);
    if (ret) {
        cout << "相等" << endl;
    }else {
        cout << "不相等" << endl;
    }

    Person p1("tom",10);
    Person p2("tom",10);

    bool ret2 =myCompare(p1,p2);
    if (ret2) {
        cout << "相等" << endl;
    }else {
        cout << "不相等" << endl;
    }
}

int main() {
    test();
    return 0;
}

