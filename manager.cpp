#include <iostream>
#include "manager.h"
#include <string>

Manager::Manager(int id, string name, int deptID)
{
    this -> m_ID = id;
    this -> m_Name = name;
    this -> m_Dep = deptID;
}

void Manager::showInfo()
{
    cout << "\tID： " << this->m_ID
        << "\t姓名： " << this->m_Name
        << "\t岗位： " << this->getDeptName()
        << "\t岗位职责： " << "给下属分配领导要求的任务" << endl;
}

string Manager::getDeptName()
{
    return string("经理");
    // return dept[this->m_Dep];
}
