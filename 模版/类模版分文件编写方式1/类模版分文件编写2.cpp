//
// Created by Macbook on 2025/12/18.
//
#include "类模版分文件编写.h"

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