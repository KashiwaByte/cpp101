#include "2.1class.h"
#include <iostream>

using namespace std;

int main()
{   
    int a;
    double b;
    CPerson kaka;
    kaka.m_age=10;
    kaka.m_salary=1000.05;

    a= kaka.getage();
    b= kaka.getsalary();
    cout<<"年龄是："<<a<<endl;
    cout<<"工资是："<<b<<endl;

    return 0;
}