
//
// Created by Macbook on 2025/12/24.
//
#include <vector>

#include "iostream"
using namespace std;

void printVector(vector<int> nums) {
    for (int i=0;i<nums.size();i++) {
        cout << nums[i] << " ";
    }
    cout<<endl;

}


void test() {
    vector<int> v1; // 默认无参构造
    for (int i=0;i<10;i++) {
        v1.push_back(i);
    }

    // printVector(v1);

    vector<int> v2(v1.begin(),v1.end());    // 区间构造
    // printVector(v2);

    vector<int> v3(3,8);               // n个x
    //printVector(v3);

    vector<int> v4(v3);                  // 拷贝构造
    printVector(v4);
}

int main() {
    test();
    return 0;
}

