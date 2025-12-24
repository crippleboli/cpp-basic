//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;

template<class T1,class T2>
class Person {
public:
    Person(T1 name,T2 age);
    void showPerson();
    T1 name;
    T2 age;
};

// 构造函数的类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {  // 作用域是类模版
    this->name=name;
    this->age=age;
}

// 成员函数的类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson() {  // 作用域是类模版
    cout << this->name << endl;
    cout << this->age << endl;
}


int main() {
    return 0;
}
