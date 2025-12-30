//
// Created by Macbook on 2025/12/30.
//

#include <set>

#include "iostream"
using namespace std;

class Person {
public:
    Person(string name,int age) {
        this->name = name;
        this->age = age;
    }

    string name;
    int age;
};


class comparePerson {
public:
    bool operator()(const Person &p1,const Person &p2) {
        return p1.age>p2.age;
    }

};

void test() {
    // 自定义类型 指定排序规则
    set<Person,comparePerson>s;
    Person p1("tom",23);
    Person p2("jack",21);
    Person p3("jerry",22);
    Person p4("jucy",20);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for (set<Person,comparePerson>::iterator it=s.begin();it!=s.end();it++) {
        cout << it->name<<" "<< it->age  << endl;
    }

}

int main() {
    test();
    return 0;
}

