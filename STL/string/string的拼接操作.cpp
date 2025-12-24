//
// Created by Macbook on 2025/12/22.
//
#include "iostream"
using namespace std;


void test() {
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << str1 << endl;

    str1+=':';
    cout << str1 << endl;

    string str2 = "lol";
    str1+=str2;
    cout << str1 << endl;

    string str3 = "I";
    str3.append(" love");
    cout << str3 << endl;

    str3.append(" abcde",3);
    cout << str3 << endl;

    str3.append(str2);
    cout << str3 << endl;

    str3.append(str2,0,2);
    cout << str3 << endl;

}

int main() {
    test();
    return 0;
}

