//
// Created by Macbook on 2025/12/28.
//
#include <queue>

#include "iostream"
using namespace std;

class Person {
public:
    Person(string name , int age) {
        this->name = name;
        this->age =age;
    }
    string name;
    int age;
};

void test() {
    queue<Person> q;

    Person p1("tom",20);
    Person p2("jack",50);
    Person p3("jerry",22);
    Person p4("susan",235);

    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    while (!q.empty()) {
        cout<<q.back().name<<" "<< q.back().age<<endl;
        cout<<q.front().name<<" "<< q.front().age<<endl;
        cout << "------------" << endl;
        q.pop();
    }

}

int main() {
    test();
    return 0;
}

