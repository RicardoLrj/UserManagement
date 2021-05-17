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

    /* �����˵����ܺ��� */
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

    /* ��¼�Ѿ���ӵĹ�����Ա���� */
    int m_workerNum = 0;

    /* ��¼ά��������Ա������ */
    Worker** m_WorkerArray = NULL;
};


