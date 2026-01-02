//
// Created by Macbook on 2026/1/2.
//
#include <vector>

#include "iostream"
using namespace std;

class Person {
public:
    Person(string name,int age ) {
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};

class Greater20 {
public:
    bool operator()(const Person &p) {
        return p.age>20;
    }
};

class GreaterFive {
public:
    bool operator()(int val) {
        if (val>5){return true;}
        return false;
    }

};

void test() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    vector<int>::iterator pos=find_if(v.begin(),v.end(),GreaterFive());
    if (pos!=v.end()) {
        cout<<"查找到第一个大于5的数是："<< *pos<<endl;
    }else {
        cout << "查找失败" << endl;
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

    vector<Person>::iterator pos2=find_if(v2.begin(),v2.end(),Greater20());
    if (pos2!=v2.end()) {
            cout<<"查找到第一个年龄大于20的人是："<< pos2->name<<" "<< pos2->age<<endl;
    }else {
        cout << "查找失败" << endl;
    }

}

int main() {
    test();
    return 0;
}

