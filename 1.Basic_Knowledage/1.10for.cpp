#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i =1;i<=20;i++)          //for 循环语句内可以直接声明变量，
        sum+=i;
    cout<<"the result:"<<sum<<endl;
    return 0;
    
}