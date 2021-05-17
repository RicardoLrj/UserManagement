#pragma once
#include <iostream>
#include "worker.h"
#include <string>

/* ά���û��������ļ� */
#define FILENAME "E:\\Work\\UserManagement\\workersDB.txt"
const string WORKERS[3] = {"�ϰ�", "����", "Ա��"};


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
    void save();
    void load();
    int isExist(int id);

    /* ��¼�Ѿ���ӵĹ�����Ա���� */
    int m_workerNum = 0;

    /* ��¼ά��������Ա������ */
    Worker** m_WorkerArray = NULL;

    /* �ļ����ڱ�־ */
    bool isFileEmpty = true;

};


