//
// Created by Macbook on 2025/12/30.
//
#include "iostream"
using namespace std;


void test() {
    pair<string,int> p("tom",24);
    cout << p.first<<" "<<p.second<< endl;

    pair<string,int> p2 =make_pair("jerry",22);
    cout << p2.first<<" "<<p2.second<< endl;

}

int main() {
    test();
    return 0;
}

