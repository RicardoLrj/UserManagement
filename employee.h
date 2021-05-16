#pragma once
#include "worker.h"

class Employee : public Worker
{
public:
    Employee();
    Employee(int id, string name, int depID);
    ~Employee();
    virtual void showInfo();
    virtual string getDeptName();
};
