//
// Created by Macbook on 2025/12/30.
//
#include <map>
#include <vector>
#define CEHUA 0
#define MEISHU 1
#define YANFA 2

#include "iostream"
using namespace std;

class Worker {
public:
    string name;
    int salary;
};

void createWorker(vector<Worker> &v) {
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++) {
        Worker worker;
        worker.name = "员工";
        worker.name += nameSeed[i];
        worker.salary = rand()%10000 +10000;
        v.push_back(worker);
    }
}


void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
    for (int i = 0; i < v.size(); i++) {
        int dept = rand() % 3;
        m.insert(make_pair(dept,v[i]));
    }
}

void showWorker(multimap<int, Worker> &m) {
    cout << "策划部分：" << endl;
    multimap<int,Worker>::iterator pos = m.find(CEHUA);
    for (;pos!=m.end();pos++) {
        if (pos->first != CEHUA){break;}
        cout << "姓名：" <<(*pos).second.name<<" 工资："<<(*pos).second.salary<< endl;
    }

    cout << "美术部分：" << endl;
    multimap<int,Worker>::iterator pos2 = m.find(MEISHU);
    for (;pos2!=m.end();pos2++) {
        if (pos2->first != MEISHU){break;}
        cout << "姓名：" <<(*pos2).second.name<<" 工资："<<(*pos2).second.salary<< endl;
    }

    cout << "研发部分：" << endl;
    multimap<int,Worker>::iterator pos3 = m.find(YANFA);
    for (;pos3!=m.end();pos3++) {
        if (pos3->first != YANFA){break;}
        cout << "姓名：" <<(*pos3).second.name<<" 工资："<<(*pos3).second.salary<< endl;
    }

}


void test() {
    // 创建员工
    vector<Worker> vWorker;
    createWorker(vWorker);

    // for (int i=0;i<vWorker.size();i++) {
    //     cout<< "姓名："<<vWorker[i].name<<" 工资："<<vWorker[i].salary<<endl;
    // }

    // 员工分组
    multimap<int,Worker> mWorker;
    setGroup(vWorker,mWorker);


    // 分组显示员工
    showWorker(mWorker);

}

int main() {
    srand((unsigned int)time(0));  // 初始化随机种子
    test();
    return 0;
}

