//
// Created by Macbook on 2025/12/19.
//
#include "iostream"
#include "MyArray.hpp"
using namespace std;


class Person {
public:
    Person(){};
    Person(string name,int age) {
        this->name=name;
        this->age=age;
    }
    void showPerson() {
        cout << this->name << " "<< this->age<<endl;
    }

    string name;
    int age;
};

void printIntArray(MyArray<int> &arr) {
    for (int i=0;i<arr.getSize();i++) {
        cout << arr[i] << endl;
    }
}

void printPersonArray(MyArray<Person> &arr) {
    for (int i=0;i<arr.getSize();i++) {
        arr[i].showPerson();
    }
}

void test() {

    MyArray<int> arr1(5); // 有参构造

    for (int i=0;i<5;i++) {
        arr1.Push_Back(i);
    }
    printIntArray(arr1);

    MyArray<int> arr2(arr1);   // 拷贝构造

    arr2.Pop_BacK();
    printIntArray(arr2);

    // MyArray<int> arr3(10);
    // arr3 =arr1;                   // operator = 调用

    cout << "-----------" << endl;
    MyArray<Person> arr(3);
    Person p1("tom",2);
    Person p2("jacl",3);
    Person p3("efa",4);

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);

    printPersonArray(arr);

}


int main() {
    test();
    return 0;
}

