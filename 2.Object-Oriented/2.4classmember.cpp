/*
 public 属性成员是共有的，对外可见，对内可见
 private 属性成员对外不可见，对内可见
 protected 属性成员对外不可见，对内可见，且对派生类可见
*/

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
    static string m_type;                       //静态类型，被所有类对象共享
    int m_age;
    string m_name;
    double m_salary;

    // 静态类函数，只能访问静态类数据
    static void Cprint()
    {
        cout<<"静态类数据为："<<m_type<<endl;
    }
   
};

string CPerson::m_type = "person";

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
    
    string a,b;
    CPerson  p1(10,"kaka",100.5);
    CPerson  p2;

    a=p1.m_type;
    b=p2.m_type;

    cout<<"p1的类别是:"<<a<<endl;
    cout<<"p2的类别是:"<<b<<endl;
    p1.Cprint();

    

}