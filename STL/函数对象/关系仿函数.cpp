//
// Created by Macbook on 2025/12/31.
//

#include <vector>

#include "iostream"
using namespace std;

class MyCompare {
public:
    bool operator()(int a,int b) {
        return  a>b;
    }
};
void test() {
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);

    for (vector<int>:: iterator it = v.begin();it!= v.end();it++) {
        cout<<*it<<" ";
    }
    cout << endl;

    //sort(v.begin(),v.end(),MyCompare());

    sort(v.begin(),v.end(),greater<int>());
    for (vector<int>:: iterator it = v.begin();it!= v.end();it++) {
        cout<<*it<<" ";
    }
    cout << endl;
}

int main() {
    test();
    return 0;
}

