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
    cout << "\tID�� " << this->m_ID
        << "\t������ " << this->m_Name
        << "\t��λ�� " << this->getDeptName()
        << "\t��λְ�� " << "�������������" << endl;
}

string Boss::getDeptName()
{
    return string("�ϰ�");
}
