//
// Created by Macbook on 2025/12/24.
//
#include "iostream"
using namespace std;


void test() {
    string str1 =   "abcdefgde";
    //int pos  = str1.find("de");

    // find 从左往右
    int pos  = str1.find("de"); //-1

    if (pos == -1) {
        cout << "未找到字符串" << endl;
    }else {
        cout << pos << endl;
    }

    // rfind 从右往左
    pos = str1.rfind("de");
    cout << pos << endl;


    // replace
    string str2 = "abcdefg";
    str2.replace(1,3,"1111");
    cout << str2 << endl;

}

int main() {
    test();
    return 0;
}


