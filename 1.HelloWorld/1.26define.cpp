#include <iostream>
#define TEST "this is an example"  
#define MUL(x,y)((x)+(y))           // 带参数宏定义
using namespace std; 
int main()
{   
    int a=1,b=3,c;
    cout<<TEST<<endl;
    #undef TEST       // 取消宏定义
    c = MUL(a,b);     
    cout<<c<<endl;
    return 0;
}