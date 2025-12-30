//
// Created by Macbook on 2025/12/30.
//
#include <list>

#include "iostream"
using namespace std;

class Person {
public:
    Person(string name,int age,int height) {
        this->name =name;
        this->age=age;
        this->height=height;
    }

    string name;
    int  age;
    int height;
};

bool comparePerson(Person &p1,Person &p2) {

    if (p1.age == p2.age) {
        return p1.height>p2.height;
    }else {
        return p1.age < p2.age;
    }
}


void test() {
    list<Person>L;
    Person p1("刘备", 35, 175);
    Person p2("关羽", 32, 185);
    Person p3("张飞", 30, 165);
    Person p4("赵云", 30, 178);
    Person p5("诸葛亮", 30, 172);
    Person p6("曹操", 40, 168);

    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    for (list<Person>::iterator it=L.begin();it!=L.end();it++) {
        cout << (*it).name<<" "<<(*it).age<< " "<<(*it).height << endl;
    }
    cout << "-------------" << endl;
    L.sort(comparePerson);
    for (list<Person>::iterator it=L.begin();it!=L.end();it++) {
        cout << (*it).name<<" "<<(*it).age<< " "<<(*it).height << endl;
    }

}

int main() {
    test();
    return 0;
}

