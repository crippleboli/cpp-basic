//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;
template<class T1,class T2>
class Person {
public:
    Person(T1 name,T2 age){
        this->name =name;
        this->age =age;
    }
    void showPerson() {
        cout << this->name << endl;
        cout << this->age << endl;
    }

    T1 name;
    T2 age;
};


// 1.指定传入类型  最常用
void printPerson(Person<string,int> &p) {
    p.showPerson();
}

// 2.参数模版化
template<class T1,class T2>
void printPerson2(Person<T1,T2>&p) {
    p.showPerson();
}

// 3.整个类模版化
template<class T>
void printPerson3(T &p) {
    p.showPerson();
    cout << typeid(T).name() << endl;
}

void test() {
    Person<string,int> p1("tom",40);
    printPerson(p1);

    Person<string,int> p2("jack",32);
    printPerson2(p2);

    Person<string,int> p3("jerry",22);
    printPerson3(p3);
}


int main() {
    test();
    return 0;
}

