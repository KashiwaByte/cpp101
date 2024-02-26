#include "2.1class.h"
// 类函数的实现，因为类函数在域外，因此需要用到类运算符 ::
int CPerson::getage()
{
    return m_age;
}

char* CPerson::getname()
{
    return m_name;

}

double CPerson::getsalary()
{
    return m_salary;
}