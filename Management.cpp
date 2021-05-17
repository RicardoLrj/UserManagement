#include "Management.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <iostream>
#include <fstream>

using namespace std;

Management::Management(/* args */)
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    if (ifs.is_open())
    {
        
        char ch;
        ifs >> ch;
        ifs.close();
        if (!ifs.eof())
        {
            cout << "当前系统保存有工作人员: ";
            isFileEmpty = false;
            load();
            cout << m_workerNum << " 人" << endl;
        }
        else
        {
            cout << "当前系统暂无工作人员" << endl;
            isFileEmpty = true;
            m_workerNum = 0;
            m_WorkerArray = NULL;
        }
    }
    else
    {
        cout << "文件不存在" << endl;
        isFileEmpty = true;
        m_workerNum = 0;
        m_WorkerArray = NULL;
    }
}

Management::~Management()
{
    m_workerNum = 0;
    if (m_WorkerArray != NULL)
    {
        delete [] m_WorkerArray;
        m_WorkerArray = NULL;
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
    cout << "**********用户管理系统即将退出，感谢使用**********" << endl;
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

            if (isExist(id) >= 0)
            {
                cout << "该用户ID已被使用，请输入其他ID" << endl;
                depID = 0;
            }

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
        
        save();
        isFileEmpty = false;
    }
    else
    {
        cout << "您输入有误！" << endl;
    }
}

void Management::showWorker()
{
    cout << "**********欢迎来到显示用户子系统**********" << endl;
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
    cout << "**********欢迎来到删除用户子系统**********" << endl;
    if (m_WorkerArray == NULL)
    {
        cout << "目前暂无用户" << endl;
        return;
    }

    cout << "请输入你要删除的用户ID： " << endl;
    int choice;
    cin >> choice;
    int index = isExist(choice);
    if (index < 0)
    {
        cout << "你要删除的用户不存在" << endl;
        return;
    }
    delete m_WorkerArray[index];
    for (int i = index; i < m_workerNum-1; i++)
    {
        
        m_WorkerArray[i] = m_WorkerArray[i+1];
    }
    m_workerNum--;
    save();
    if (!m_workerNum)
    {
        delete [] m_WorkerArray;
        m_WorkerArray = NULL;
        isFileEmpty = true;
    }
    cout << "删除成功" << endl;
}

void Management::modifyWorker()
{
    cout << "**********欢迎来到修改用户子系统**********" << endl;
    if (isFileEmpty)
    {
        cout << "目前暂无用户" << endl;
        return;
    }
    cout << "请输入你要修改的用户ID： " << endl;
    int choice;
    cin >> choice;
    int index = isExist(choice);
    if (index < 0)
    {
        cout << "该用户不存在" << endl;
        return;
    }
    
    int id;
    string name;
    int depID;
    Worker* worker = NULL;
    
    creatWorker(id, name, depID);

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
        break;
    }
    if (worker != NULL)
    {
        delete m_WorkerArray[index];
        m_WorkerArray[index] = worker;
        cout << "修改成功" << endl;
    }
}

void Management::findWorker()
{
    cout << "**********欢迎来到查找用户子系统**********" << endl;
    cout << "请输入你要查找的用户ID： " << endl;
    int choice = 0;
    cin >> choice;
    int index = isExist(choice);
    if (index < 0)
    {
        cout << "该用户不存在" << endl;
    }
}

void Management::orderWorker()
{
    cout << "**********欢迎来到排序用户子系统**********" << endl;
    if (isFileEmpty)
    {
        cout << "目前暂无用户，无需排序" << endl;
        return;
    }

    cout << "请输入排序方式(1、升序；2、降序)： " << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        for (int i = m_workerNum; i > 0; i--)
        {
            for (int j = 0; j < i-1; j++)
            {
                if (m_WorkerArray[j]->m_ID > m_WorkerArray[j+1]->m_ID)
                {
                    Worker* temp = m_WorkerArray[j];
                    m_WorkerArray[j] = m_WorkerArray[j+1];
                    m_WorkerArray[j+1] = temp;
                }
            }
        }
        break;
    case 2:
        for (int i = m_workerNum; i > 0; i--)
        {
            for (int j = 0; j < i-1; j++)
            {
                if (m_WorkerArray[j]->m_ID < m_WorkerArray[j+1]->m_ID)
                {
                    Worker* temp = m_WorkerArray[j];
                    m_WorkerArray[j] = m_WorkerArray[j+1];
                    m_WorkerArray[j+1] = temp;
                }
            }
        }
        break;
    default:
        cout << "输入有误" << endl;
        break;
    }
    save();
}

void Management::clearWorker()
{
    cout << "**********欢迎来到清空用户子系统**********" << endl;
    if (isFileEmpty)
    {
        cout << "目前暂无用户,无需清除" << endl;
        return;
    }
    delete [] m_WorkerArray;
    m_WorkerArray = NULL;
    m_workerNum = 0;
    save();
    isFileEmpty = true;

    cout << "全部清除完成"  << endl;
}


void Management::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);
    if(m_WorkerArray != NULL)
    {
        for(int i=0; i < m_workerNum; i++)
        {
            ofs << this->m_WorkerArray[i]->m_ID << " "
                << this->m_WorkerArray[i]->m_Name << " "
                << this->m_WorkerArray[i]->m_Dep << endl;
        }
    }
}

void Management::load()
{
    if (isFileEmpty)
    {
        cout << "暂时没有工作人员" << endl;
        return;
    }
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int depID;

    while (ifs >> id && ifs >> name && ifs >> depID)
    {
        m_workerNum++;
        
    }
    // cout << "在load函数内部" << m_workerNum << endl;
    m_WorkerArray = new Worker*[m_workerNum];

    ifs.clear(ios::goodbit);
    ifs.seekg(0, ios::beg);

    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> depID)
    {
        Worker* temp = NULL;
        switch (depID)
        {
        case 1:
            temp = new Boss(id, name, depID);
            break;
        
        case 2:
            temp = new Manager(id, name, depID);
            break;
        
        case 3:
            temp = new Employee(id, name, depID);
            break;
        
        default:
            break;
        }
        // temp->showInfo();
        m_WorkerArray[index] = temp;
        index++;
    }

    // for(int i = 0; i < m_workerNum; i++)
    // {
    //     m_WorkerArray[i] -> showInfo();
    // }

    ifs.close();
}

 int Management::isExist(int id)
 {
    int index = -1;
    if (m_WorkerArray != NULL)
    {
        for (int i=0; i < m_workerNum; i++)
        {
            if(m_WorkerArray[i]->m_ID == id)
            {
                cout << "已找到以下用户： " << endl;
                m_WorkerArray[i] -> showInfo();
                index = i;
                return index;
            }
        }
    }
    
    return index;
 }
