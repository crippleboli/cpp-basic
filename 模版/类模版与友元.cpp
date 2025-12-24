//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;

// Person类的前置声明 否则在printPerson2的前置实现中无法识别类
template<class T1,class T2>
class Person;

// 类外实现 需要前置 否则在class内识别不出
template<class T1,class T2>
void printPerson2(Person<T1,T2>p) {
    cout << p.name << endl;
    cout << p.age << endl;
}

template <class T1,class T2>
class Person {
    // 全局函数 类内实现
    friend void printPerson(Person<T1,T2> p) {
        cout << p.name << endl;
        cout << p.age << endl;
    }

    // 全局函数 类外实现
    // 需要加上模版的<> 否则和类外不是一个类型
    friend void printPerson2<>(Person<T1,T2> p);
public:
    Person(T1 name,T2 age) {
        this->name=name;
        this->age =age;
    }

    T1 name;
    T2 age;
};

void test() {
    Person<string,int> p1("tom",24);
    printPerson(p1);

    Person<string,int> p2("jack",24);
    printPerson2(p2);
}

int main() {
    test();
    return 0;
}
