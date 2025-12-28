//
// Created by Macbook on 2025/12/28.
//
#include <stack>

#include "iostream"
using namespace std;


void test() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout << s.size() << endl;

}

int main() {
    test();
    return 0;
}
