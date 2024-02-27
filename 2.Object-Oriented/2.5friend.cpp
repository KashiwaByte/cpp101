//使用friend 关键字可以让特定的函数或者别的类的所有成员函数对私有数据成员进行读写
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
class CPerson
{   
    friend class CPlist;                    //定义CPlist为CPerson的友元类，让CPlist可以调用CPerson的私有方法
 
    private:
        string P_name;
        int P_age;
        void outputer();
    public:
        
        int salary;
};

class CPlist
{   
    friend class CPerson;
    private:
        CPerson *clist;

    public:
        int count;
        void outputs();
};
void CPerson::outputer()
{
    cout<<"大家好我是CPerson的私有方法"<<endl;
}

void CPlist::outputs()
{
    cout<<"大家好我是CPlist的私有方法"<<endl;
    clist->outputer();                          //
}


int main()
{
    CPlist list;
    list.outputs();

}
