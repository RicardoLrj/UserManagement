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
            cout << "��ǰϵͳ�����й�����Ա: ";
            isFileEmpty = false;
            load();
            cout << m_workerNum << " ��" << endl;
        }
        else
        {
            cout << "��ǰϵͳ���޹�����Ա" << endl;
            isFileEmpty = true;
            m_workerNum = 0;
            m_WorkerArray = NULL;
        }
    }
    else
    {
        cout << "�ļ�������" << endl;
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
    cout << "**********�û�����ϵͳ�����˳�����лʹ��**********" << endl;
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

            if (isExist(id) >= 0)
            {
                cout << "���û�ID�ѱ�ʹ�ã�����������ID" << endl;
                depID = 0;
            }

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
        
        save();
        isFileEmpty = false;
    }
    else
    {
        cout << "����������" << endl;
    }
}

void Management::showWorker()
{
    cout << "**********��ӭ������ʾ�û���ϵͳ**********" << endl;
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
    cout << "**********��ӭ����ɾ���û���ϵͳ**********" << endl;
    if (m_WorkerArray == NULL)
    {
        cout << "Ŀǰ�����û�" << endl;
        return;
    }

    cout << "��������Ҫɾ�����û�ID�� " << endl;
    int choice;
    cin >> choice;
    int index = isExist(choice);
    if (index < 0)
    {
        cout << "��Ҫɾ�����û�������" << endl;
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
    cout << "ɾ���ɹ�" << endl;
}

void Management::modifyWorker()
{
    cout << "**********��ӭ�����޸��û���ϵͳ**********" << endl;
    if (isFileEmpty)
    {
        cout << "Ŀǰ�����û�" << endl;
        return;
    }
    cout << "��������Ҫ�޸ĵ��û�ID�� " << endl;
    int choice;
    cin >> choice;
    int index = isExist(choice);
    if (index < 0)
    {
        cout << "���û�������" << endl;
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
        cout << "��������" << endl;
        break;
    }
    if (worker != NULL)
    {
        delete m_WorkerArray[index];
        m_WorkerArray[index] = worker;
        cout << "�޸ĳɹ�" << endl;
    }
}

void Management::findWorker()
{
    cout << "**********��ӭ���������û���ϵͳ**********" << endl;
    cout << "��������Ҫ���ҵ��û�ID�� " << endl;
    int choice = 0;
    cin >> choice;
    int index = isExist(choice);
    if (index < 0)
    {
        cout << "���û�������" << endl;
    }
}

void Management::orderWorker()
{
    cout << "**********��ӭ���������û���ϵͳ**********" << endl;
    if (isFileEmpty)
    {
        cout << "Ŀǰ�����û�����������" << endl;
        return;
    }

    cout << "����������ʽ(1������2������)�� " << endl;
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
        cout << "��������" << endl;
        break;
    }
    save();
}

void Management::clearWorker()
{
    cout << "**********��ӭ��������û���ϵͳ**********" << endl;
    if (isFileEmpty)
    {
        cout << "Ŀǰ�����û�,�������" << endl;
        return;
    }
    delete [] m_WorkerArray;
    m_WorkerArray = NULL;
    m_workerNum = 0;
    save();
    isFileEmpty = true;

    cout << "ȫ��������"  << endl;
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
        cout << "��ʱû�й�����Ա" << endl;
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
    // cout << "��load�����ڲ�" << m_workerNum << endl;
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
                cout << "���ҵ������û��� " << endl;
                m_WorkerArray[i] -> showInfo();
                index = i;
                return index;
            }
        }
    }
    
    return index;
 }
