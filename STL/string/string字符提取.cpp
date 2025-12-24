//
// Created by Macbook on 2025/12/24.
//
#include "iostream"
using namespace std;


void test() {
    string str = "hello";
    for (int i=0;i<str.size();i++) {
        cout<< str[i]<<" ";
    }
    cout <<endl;

    for (int i=0;i<str.size();i++) {
        cout<< str.at(i)<<" ";
    }
    cout <<endl;

    str[0] = 'x';
    str.at(1)='x';
    cout<<str<<endl;
}

int main() {
    test();
    return 0;
}

