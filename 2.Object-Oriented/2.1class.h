#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
class CPerson
{
public:
    //数据成员
    int m_age;
    char m_name[15];
    double m_salary;

    // 成员函数
    int getage();
    char* getname();
    double getsalary();

};