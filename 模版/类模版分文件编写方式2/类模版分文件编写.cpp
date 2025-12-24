//
// Created by Macbook on 2025/12/18.
//

#include "类模版分文件编写.hpp"

void test() {
    Person<string,int> p("tom",22);
    p.showPerson();
}

int main() {
    test();
    return 0;
}