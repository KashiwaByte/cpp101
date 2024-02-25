#include <iostream>
using namespace std;
int add(int a,int b)
{
   cout<<a+b<<endl; 
   return a+b;
    
}
int main()
{   int a=10,b=100,c;
    int (*p)(int,int);
    p = add;            // 指针指向函数
    c=(*p)(a,b);        // 调用指针指向的函数，并传参
    cout<<c;

    

}