//
// Created by Macbook on 2025/12/22.
//
#include "iostream"
using namespace std;


void test() {
    string s1;

    const char *str = "hello world";
    string s2(str);
    cout << s2 << endl;

    string s3(s2);
    cout << s3 << endl;

    string s4(10,'a');
    cout << s4 << endl;

}

int main() {
    test();
    return 0;
}

