#include <iostream>
using namespace std;
int Add(int x,int y )
{
    cout<<"int add"<<endl;
    return x+y;
}

double Add(double x,double y )
{
    cout<<"double add"<<endl;
    return x+y;
}
int main()
{   
   int ivar = Add(5,3);
   float fvar = Add(10.25,5.446);
   cout<<"int"<<ivar<<endl;
   cout<<"float"<<fvar<<endl;
   return 0;

}