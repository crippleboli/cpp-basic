//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;

template<class NameType,class AgeType =int>
class Person {
public:
    Person(NameType name,AgeType age) {
        this->name = name;
        this->age = age;
    }

    void showPerson() {
        cout <<this->name<< endl;
        cout << this->age << endl;
    }


    NameType name;
    AgeType age;
};
void test() {
    // 1.类模版没有自动类型推导的使用方式
    //Person p1("tom",22);

    // 2.类模版 在模版参数列表可以有默认参数
    Person<string> p2("jack",30);
    p2.showPerson();

}

int main() {
    test();
    return 0;
}

