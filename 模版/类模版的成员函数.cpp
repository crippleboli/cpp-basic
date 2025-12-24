//
// Created by Macbook on 2025/12/18.
//
#include "iostream"
using namespace std;

class Person1 {
public:
    void showPerson1() {
        cout << "Person1 show" << endl;
    }
};

class Person2{
public:
    void showPerson2() {
        cout << "Person2 show" << endl;
    }
};

template <class T>
class  Myclass {
public:
    T obj;
    // 类模版中的成员函数  obj不能确定类型
    void func1() {
        obj.showPerson1();
    }
    void func2() {
        obj.showPerson2();
    }
};

void test() {
    Myclass<Person2> m;
    //m.func1();
    m.func2();

}

int main() {
    test();
    return 0;
}
