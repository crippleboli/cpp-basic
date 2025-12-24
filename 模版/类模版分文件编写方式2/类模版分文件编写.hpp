//
// Created by Macbook on 2025/12/18.
//

#ifndef CPP_BASICS_类模版分文件编写_H
#define CPP_BASICS_类模版分文件编写_H

#include "iostream"
using namespace std;

template <class T1,class T2>
class Person {
public:
    Person(T1 name,T2 age);
    void showPerson();
    T1 name;
    T2 age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->name=name;
    this->age=age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson() {
    cout << this->name << endl;
    cout << this->age << endl;
}


#endif //CPP_BASICS_类模版分文件编写_H