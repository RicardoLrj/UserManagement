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
    worker = new Employee(1, "张三", 0);
    worker->showInfo();
    delete worker;

    worker = new Manager(2, "李四", 1);
    worker->showInfo();
    delete worker;

    worker = new Boss(3, "王五", 2);
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
        cout << "请输入您的选择：" << endl;
        cin >> selection;

        switch (selection)
        {
            case 0:
            /* code 退出管理程序*/
                management.exitSys();
                break;
            case 1:
            /* 添加职工信息 */
                management.addWorker();
                break;
            case 2:
            /* code 显示职工信息 */
                management.showWorker();
                break;
            case 3:
            /* 删除职工信息 */
                management.delWorker();
                break;
            case 4:
            /* 修改职工信息 */
                management.modifyWorker();
                break;
            case 5:
            /* 查找职工信息 */
                management.findWorker();
                break;
            case 6:
            /* 排序职工信息 */
                management.orderWorker();
                break;
            case 7:
            /* 清空职工信息 */
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
