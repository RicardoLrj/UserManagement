#include "Management.h"

Management::Management(/* args */)
{
}

Management::~Management()
{
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
    cout << "欢迎使用用户管理系统" << endl;
    system("pause");
    exit(0);
}

void Management::addWorker()
{

}

void Management::showWorker()
{
    
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
