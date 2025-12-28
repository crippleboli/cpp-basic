//
// Created by Macbook on 2025/12/28.
//
#include <deque>
#include <vector>

#include "iostream"
using namespace std;

class Person {
public:
    Person(string name,int score) {
        this->name = name;
        this->score = score;
    }

    string name;
    int score;
};

void createPerson(vector<Person> &v){
    string nameSeed = "ABCDE";
    for (int i=0;i<5;i++) {
        string name = "选手";
        name += nameSeed[i];

        Person p(name,0);
        v.push_back(p);
    }

}

void setScore(vector<Person> &v) {
    for (vector<Person> :: iterator it = v.begin();it!= v.end();it++) {
        deque<int> d;
        // 随机获取得分
        for (int i=0;i<10;i++) {
            int score = rand()%41 + 60;
            d.push_back(score);
        }

        // 输出分数
        // cout << "选手："<< it->name<<" 得分：" << endl;
        // for (int i=0;i<d.size();i++) {
        //     cout << d.at(i) << " ";
        // }
        // cout<<endl;

        //   排序后去掉最高分和最低分
        sort(d.begin(),d.end());
        d.pop_back();
        d.pop_front();
        // 均分
        int sum =0;
        for (int i=0;i<d.size();i++) {
            sum += d.at(i);
        }
        int avg = sum / d.size();
        (*it).score  = avg;
    }
}

void showScore(vector<Person> v) {
    for (int i=0;i<v.size();i++) {
        cout << "选手："<<v[i].name<<" 平均分："<< v[i].score << endl;
    }
}

void test() {
    vector<Person> v;
    createPerson(v);
    // for (vector<Person>::iterator it =v.begin();it!= v.end();it++) {
    //     cout<< (*it).name<<" "<<(*it).score<<endl;
    // }
    setScore(v);
    showScore(v);

}

int main() {
    test();
    return 0;
}

