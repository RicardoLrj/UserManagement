#include <iostream>
#include <fstream>

#define FILENAME "log.txt"

using namespace std;

int main()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);
    

    return 0;
}