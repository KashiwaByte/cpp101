#include <iostream>
#include <stdarg.h>
using namespace std;
void couttype(char* s,int i,...)  // 参数 默认参数  可变参数
{   
    cout<<"参数:" <<s<<endl<<endl<<"可变参数:";
    va_list arguments;
    va_start(arguments,i);
    while(i--)
    {   
        int iData =va_arg(arguments,int);
        cout<<iData<<endl;
    }
    va_end(arguments);
   
}
int main()
{
    couttype("xidian",3,3,4,5);
}