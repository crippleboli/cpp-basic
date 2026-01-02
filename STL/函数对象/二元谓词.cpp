//
// Created by Macbook on 2025/12/30.
//
#include <vector>
#include "iostream"

using namespace std;

class MyCompare {
public:
    bool operator()(int a,int b) {
        return a>b;
    }
};

void test() {
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);

    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(),v.end(),MyCompare());
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;

}

int main() {
    test();
    return 0;
}

