#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
class CPerson
{
public:
    // 构造函数
    CPerson();                                  //默认构造函数
    CPerson(int age,string name,double salary); //带参数构造函数

    //数据成员
    int m_age;
    string m_name;
    double m_salary;

  
   
};

CPerson::CPerson()  
{
    m_age = 10;
    m_name = "kashiwa";
    m_salary = 100.5;
}

CPerson::CPerson(int age,string name,double salary)
{
    m_age = age;
    m_name = name;
    m_salary = salary;
}

int main()
{   
    int b;
    string a;
    CPerson  p1(10,"kaka",100.5);
    CPerson  p2;

    a=p1.m_name;
    b=p2.m_age;

    cout<<"p1的名字是:"<<a<<endl;
    cout<<"p2的年龄是:"<<b<<endl;

    

}