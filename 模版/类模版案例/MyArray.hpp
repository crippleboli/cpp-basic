//
// Created by Macbook on 2025/12/19.
//

#ifndef CPP_BASICS_MYARRAY_H
#define CPP_BASICS_MYARRAY_H

#include "iostream"
using namespace std;
template<class T>
class MyArray {
public:
    // 有参构造
    MyArray(int capacity) {
        cout << "有参构造调用" << endl;
        this->m_Capacity =capacity;
        this->m_Size=0;
        this->pAddress =new T[m_Capacity];
    }
    // 拷贝构造
    MyArray(const MyArray &arr) {
        cout << "拷贝构造调用" << endl;
        this->m_Capacity=arr.m_Capacity;
        this->m_Size=arr.m_Size;
        // 深拷贝
        this->pAddress =new T[arr.m_Capacity];  // 堆区new出空间
        for (int i=0;i<this->m_Size;i++) {
            this->pAddress[i]=arr.pAddress[i];  // 复制数据到新空间
        }

    }

    // operator [] 重载
    T& operator[](int index) {
        return this->pAddress[index];
    }

    // operator =  重载防止浅拷贝
    MyArray& operator=(MyArray&arr) {
        cout << "operator = 调用" << endl;
        if (this->pAddress!=NULL) {
            delete [] this->pAddress;
            this->pAddress =NULL;
            this->m_Capacity =0;
            this->m_Size =0;
        }

        this->m_Capacity =arr.m_Capacity;
        this->m_Size =arr.m_Size;
        this->pAddress =new T[this->m_Capacity];
        for (int i=0;i<this->m_Size;i++) {
            this->pAddress[i]=arr.pAddress[i];
        }

        return *this;
    }

    // 尾插法
    void Push_Back(const T &val) {
        // 数组已满时退出
        if (this->m_Capacity == this->m_Size) {
            return;
        }

        this->pAddress[this->m_Size] = val;
        this->m_Size++;
    }
    // 尾删法
    void Pop_BacK() {
        // 空数组无法再删除
        if (this->m_Size == 0) {
            return;
        }
        this->m_Size --;
    }
    // 数组大小
    int getCapacity() {
        return this->m_Capacity;
    }

    // 数组容量
    int getSize() {
        return this->m_Size;
    }


    // 析构函数
    ~MyArray() {
        cout << "析构函数调用" << endl;
        if (this->pAddress!=NULL) {
            delete [] this->pAddress;
            this->pAddress =NULL;
        }

    }


private:
    T *pAddress;  // 指针指向堆区的真实数组
    int m_Capacity; // 数组容量
    int m_Size;     // 数组大小
};



#endif //CPP_BASICS_MYARRAY_H