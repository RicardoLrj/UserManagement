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
    cout << "\tID�� " << this->m_ID
        << "\t������ " << this->m_Name
        << "\t��λ�� " << this->getDeptName()
        << "\t��λְ�� " << "�����������쵼Ҫ�������" << endl;
}

string Manager::getDeptName()
{
    return string("����");
    // return dept[this->m_Dep];
}
