//
// Created by Macbook on 2025/12/24.
//
#include "iostream"
using namespace std;


void test() {
    string str ="hello";
    str.insert(0,"123");
    cout << str << endl;

    //0开始3个
    str.erase(0,3);
    cout << str << endl;

}

int main() {
    test();
    return 0;
}

