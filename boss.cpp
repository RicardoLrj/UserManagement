#include <iostream>
#include "boss.h"
#include <string>

Boss::Boss(int id, string name, int deptID)
{
    this -> m_ID = id;
    this -> m_Name = name;
    this -> m_Dep = deptID;
}

void Boss::showInfo()
{
    cout << "\tID： " << this->m_ID
        << "\t姓名： " << this->m_Name
        << "\t岗位： " << this->getDeptName()
        << "\t岗位职责： " << "给经理分配任务" << endl;
}

string Boss::getDeptName()
{
    return string("老板");
}
