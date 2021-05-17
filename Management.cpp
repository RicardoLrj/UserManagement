#include "Management.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <iostream>

using namespace std;

Management::Management(/* args */)
{
}

Management::~Management()
{
    m_workerNum = 0;
    if (m_WorkerArray != NULL)
    {
        delete [] m_WorkerArray;
    }
}

void Management::showMenu()
{
    cout << "*************Menu**********" << endl;
    cout << "*******0、退出管理程序*******" << endl;
    cout << "*******1、添加职工信息*******" << endl;
    cout << "*******2、显示职工信息*******" << endl;
    cout << "*******3、删除职工信息*******" << endl;
    cout << "*******4、修改职工信息*******" << endl;
    cout << "*******5、查找职工信息*******" << endl;
    cout << "*******6、按照编号排序*******" << endl;
    cout << "*******7、清空所有文档*******" << endl;
    cout << "****************************" << endl;
    cout << endl;
}

void Management::exitSys()
{
    cout << "**********用户管理系统即将退出，欢迎使用**********" << endl;
    system("pause");
    exit(0);
}

void Management::creatWorker(int& id, string& name, int& depID)
{
    cout << "请输入新的工作人员ID： " << endl;
    cin >> id;
    cout << "请输入新的工作人员姓名： " << endl;
    cin >> name;
    cout << "请输入新的工作人员岗位(1、老板； 2、经理； 3、员工)： " << endl;
    cin >> depID;
}

void Management::addWorker()
{
    cout << "**********欢迎来到添加用户子系统**********" << endl;
    cout << "请输入添加用户的数量： " << endl;
    int numbers = 0;
    cin >> numbers;
    
    if (numbers > 0)
    {
        int newSize = this->m_workerNum + numbers;

        Worker ** newSpace = new Worker*[newSize];
        for (int i=0; i < m_workerNum; i++)
        {
            newSpace[i] = m_WorkerArray[i];
        }

        delete [] m_WorkerArray;
        
        while (numbers--)
        {
            
            int depID = 0;
            int id = 0;
            string name;
            Worker * worker = NULL;
            
            /* 创建用户 */
            creatWorker(id, name, depID);

            /* 根据岗位ID创建对应的工作人员 */
            switch (depID)
            {
            case 1:
                worker = new Boss(id, name, depID);
                break;
            case 2:
                worker = new Manager(id, name, depID);
                break;

            case 3:
                worker = new Employee(id, name, depID);
                break;
            default:
                cout << "输入有误！" << endl;
                numbers++;
                break;
            }
            if (worker != NULL)
                newSpace[m_workerNum+numbers] = worker; 
        }

        m_workerNum = newSize;
        m_WorkerArray = newSpace;
        
        cout << m_workerNum << endl << m_WorkerArray << endl;

    }
    else
    {
        cout << "您输入有误！" << endl;
    }
}

void Management::showWorker()
{
    if (m_WorkerArray != NULL)
    {
        
        for(int i=0; i < m_workerNum; i++)
        {
            m_WorkerArray[i]->showInfo();
        }
    }

    else
    {
        cout << "目前暂无用户" << endl;
    }
}

void Management::delWorker()
{
    
}

void Management::modifyWorker()
{
    
}

void Management::findWorker()
{
    
}

void Management::orderWorker()
{
    
}

void Management::clearWorker()
{
    
}
