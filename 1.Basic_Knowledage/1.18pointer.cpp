#include <iostream>
using namespace std;
int main()
{
    int i=100;
    int *p=&i;

    cout<<"地址："<<p<<endl;
    cout<<"取地址："<<&i<<endl;
    cout<<"取值"<<*p<<endl;
}