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
    cout << "\tID： " << this->m_ID << "\t姓名： " << this->m_Name << "\t岗位： " << this->getDeptName() << "\t岗位职责： " << "完成经理交付的任务" << endl;
}

string Employee::getDeptName()
{
    return string("员工");
    //  return dept[this->m_Dep];
}