#define day 7
#include <iostream>
using namespace std;
int main()
{
    const int a = 10;
    //month = 24; //报错，常量是不可以修改的
    cout<<a<<endl;

    cout<<"一个星期有："<<day<<"天";
    //day = 8;  //报错，宏常量不可以修改

    return 0;
}