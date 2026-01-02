//
// Created by Macbook on 2026/1/2.
//
#include <vector>

#include "iostream"
using namespace std;

class Person {
public:
    Person(string name,int age) {
        this->name =name;
        this->age =age;
    }
    // 为了find查找需要重载==
    bool operator==(const Person &p){
        if (this->name == p.name&&this->age == p.age) {
            return true;
        }
        return false;
    }


    string name;
    int age;
};

void test() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    vector<int>:: iterator pos = find(v.begin(),v.end(),5);
    if (pos == v.end()) {
        cout << "没有找到" << endl;
    }else {
        cout << *pos << endl;
    }

    vector<Person> v2;
    Person p1("tom",15);
    Person p2("jack", 18);
    Person p3("lucy", 20);
    Person p4("alice", 22);
    Person p5("bob", 16);
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);
    v2.push_back(p4);
    v2.push_back(p5);

    vector<Person>:: iterator pos2 = find(v2.begin(),v2.end(),p3);
    if (pos2 == v2.end()) {
        cout << "没有找到" << endl;
    }else {
        cout << pos2->name<<" "<< pos2->age<< endl;
    }


}

int main() {
    test();
    return 0;
}

