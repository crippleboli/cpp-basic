//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;

template<class NameType,class AgeType>
class Person {
public:
    Person(NameType name,AgeType age) {
        this->name =name;
        this->age=age;
    }
    void showPerson() {
        cout << this->name << endl;
        cout << this->age << endl;
    }

    NameType name;
    AgeType age;
};

void test() {
    Person <string,int> p1("tom",99);
    p1.showPerson();
}


int main() {
    test();
    return 0;
}

