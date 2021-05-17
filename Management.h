#pragma once
#include <iostream>
#include "worker.h"


using namespace std;

class Management
{
private:
    /* data */
public:
    Management(/* args */);
    ~Management();

    /* 声明菜单功能函数 */
    void showMenu();
    void exitSys();
    void addWorker();
    void showWorker();
    void delWorker();
    void modifyWorker();
    void findWorker();
    void orderWorker();
    void clearWorker();

    void creatWorker(int& id, string& name, int& depID);

    /* 记录已经添加的工作人员数量 */
    int m_workerNum = 0;

    /* 记录维护工作人员的数组 */
    Worker** m_WorkerArray = NULL;
};


