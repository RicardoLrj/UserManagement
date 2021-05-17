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
    cout << "*******0���˳��������*******" << endl;
    cout << "*******1�����ְ����Ϣ*******" << endl;
    cout << "*******2����ʾְ����Ϣ*******" << endl;
    cout << "*******3��ɾ��ְ����Ϣ*******" << endl;
    cout << "*******4���޸�ְ����Ϣ*******" << endl;
    cout << "*******5������ְ����Ϣ*******" << endl;
    cout << "*******6�����ձ������*******" << endl;
    cout << "*******7����������ĵ�*******" << endl;
    cout << "****************************" << endl;
    cout << endl;
}

void Management::exitSys()
{
    cout << "**********�û�����ϵͳ�����˳�����ӭʹ��**********" << endl;
    system("pause");
    exit(0);
}

void Management::creatWorker(int& id, string& name, int& depID)
{
    cout << "�������µĹ�����ԱID�� " << endl;
    cin >> id;
    cout << "�������µĹ�����Ա������ " << endl;
    cin >> name;
    cout << "�������µĹ�����Ա��λ(1���ϰ壻 2������ 3��Ա��)�� " << endl;
    cin >> depID;
}

void Management::addWorker()
{
    cout << "**********��ӭ��������û���ϵͳ**********" << endl;
    cout << "����������û��������� " << endl;
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
            
            /* �����û� */
            creatWorker(id, name, depID);

            /* ���ݸ�λID������Ӧ�Ĺ�����Ա */
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
                cout << "��������" << endl;
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
        cout << "����������" << endl;
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
        cout << "Ŀǰ�����û�" << endl;
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
