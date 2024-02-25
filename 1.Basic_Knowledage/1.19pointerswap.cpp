#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
    
}
int main()
{   int *a,*b;
    int c=10,d=100;
    a=&c;b=&d;
    cout<<"原值："<<c<<"and"<<d<<endl;
    swap(a,b);
    cout<<"变值："<<c<<"and"<<d<<endl;

}