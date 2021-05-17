#include <iostream>
#include <string>
#include "Management.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

void test()
{
    Worker* worker = NULL;
    worker = new Employee(1, "����", 0);
    worker->showInfo();
    delete worker;

    worker = new Manager(2, "����", 1);
    worker->showInfo();
    delete worker;

    worker = new Boss(3, "����", 2);
    worker->showInfo();
    delete worker;
}

int main()
{
    // test();
    Management management;
    int selection = 0;
    
    while (1)
    {
        
        management.showMenu();
        cout << "����������ѡ��" << endl;
        cin >> selection;

        switch (selection)
        {
            case 0:
            /* code �˳��������*/
                management.exitSys();
                break;
            case 1:
            /* ���ְ����Ϣ */
                management.addWorker();
                break;
            case 2:
            /* code ��ʾְ����Ϣ */
                management.showWorker();
                break;
            case 3:
            /* ɾ��ְ����Ϣ */
                management.delWorker();
                break;
            case 4:
            /* �޸�ְ����Ϣ */
                management.modifyWorker();
                break;
            case 5:
            /* ����ְ����Ϣ */
                management.findWorker();
                break;
            case 6:
            /* ����ְ����Ϣ */
                management.orderWorker();
                break;
            case 7:
            /* ���ְ����Ϣ */
                management.clearWorker();
                break;
            
            default:
                system("cls");
                break;
        }

        system("Pause");
        // system("cls");
    }
    

    system("Pause");

    return 0;
}
