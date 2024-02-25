#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    
}
int main()
{  
    int c=10,d=100;
    
    cout<<"原值："<<c<<"and"<<d<<endl;
    swap(c,d);
    cout<<"变值："<<c<<"and"<<d<<endl;

}