//
// Created by Macbook on 2025/12/30.
//
#include "iostream"
using namespace std;

class MyAdd {
public:
    int operator()(int a, int b) {
        return a+b;
    }

};

class MyPrint {
public:
    MyPrint() {
        count =0;
    }
    void operator()(string text) {
        cout << text << endl;
        count++;
    }

    int count;
};

void doPrint(MyPrint & mp,string text) {
    mp(text);
}


void test() {
    // 像普通函数那样调用
    MyAdd myAdd;
    cout << myAdd(10,10) << endl;

    // 函数对象超出普通函数的概念，函数对象可以有自己的状态
    MyPrint myPrint;
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");

    cout<<"调用了"<<myPrint.count<<"次"<<endl;

    // 函数对象可以作为参数传递
    doPrint(myPrint,"hello cpp");
}

int main() {
    test();
    return 0;
}

