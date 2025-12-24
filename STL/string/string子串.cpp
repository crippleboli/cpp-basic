//
// Created by Macbook on 2025/12/24.
//
#include "iostream"
using namespace std;


void test() {
    string email = "1165757464@qq.com";

    int pos = email.find("@"); // 下标
    string qq = email.substr(0,pos);

    cout << qq << endl;

}

int main() {
    test();
    return 0;
}

