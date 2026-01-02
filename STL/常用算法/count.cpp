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
    bool operator==(const Person &p) {
        return p.age == this->age;
    }
    string name;
    int age;
};

void test() {
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);
    int num = count(v.begin(),v.end(),40);
    cout << "40的个数" << num<< endl;

    vector<Person> v2;
    Person p1("tom",15);
    Person p2("jack", 22);
    Person p3("lucy", 20);
    Person p4("alice", 22);
    Person p5("bob", 16);
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);
    v2.push_back(p4);
    v2.push_back(p5);

    int num2 = count(v2.begin(),v2.end(),p4);
    cout << "alice同岁数的个数" << num2<< endl;

}

int main() {
    test();
    return 0;
}

