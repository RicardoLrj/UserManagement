#include "employee.h"
#include <string>

Employee::Employee(){}

Employee::Employee(int id, string name, int depID)
{
    this -> m_ID = id;
    this -> m_Name = name;
    this -> m_Dep = depID;
    
}

Employee::~Employee(){}

void Employee::showInfo()
{
    cout << "\tID�� " << this->m_ID << "\t������ " << this->m_Name << "\t��λ�� " << this->getDeptName() << "\t��λְ�� " << "��ɾ�����������" << endl;
}

string Employee::getDeptName()
{
    return string("Ա��");
    //  return dept[this->m_Dep];
}