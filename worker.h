#pragma once
#include <iostream>
#include <string>

using namespace std;

static string dept[3] = {"老板", "经理", "员工"};

class Worker
{
public:
    Worker();
    ~Worker();
    virtual void showInfo() = 0;
    virtual string getDeptName() = 0;

    string m_Name;
    int m_ID;
    int m_Dep;
    // string dept[3] = {"老板", "经理", "员工"};
};
