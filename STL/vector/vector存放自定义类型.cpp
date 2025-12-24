//
// Created by Macbook on 2025/12/22.
//
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

class Person {
public:
    Person(string name,int age){
        this->name =name;
        this->age = age;
    }

    string name;
    int age;
};


// 存放自定义类型
void test() {
    vector<Person> v;
    Person p1("tom",20);
    Person p2("alice", 25);
    Person p3("bob", 30);
    Person p4("charlie", 22);
    Person p5("diana", 28);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    // it 迭代器视为指针 *it解引用后为Person对象 直接用.访问成员
    // it指针可以直接用->访问成员
    for (vector<Person>::iterator it= v.begin();it!=v.end();it++) {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }
}

// 存放自定义数据类型的指针
void test2() {
    vector<Person*> v;
    Person p1("tom",20);
    Person p2("alice", 25);
    Person p3("bob", 30);
    Person p4("charlie", 22);
    Person p5("diana", 28);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for (vector<Person*>::iterator it= v.begin();it!=v.end();it++) {
        cout << (**it).name<<" "<< (**it).age << endl;
    }
}


int main() {
    test();
    test2();
    return 0;
}

