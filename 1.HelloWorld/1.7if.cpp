#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>b;
    if(b==1)
        a=1,
        cout<<a<<"1";
    else if(b>1)
        a=10,
        cout<<a<<"big";
    else
        a=100,
        cout<<a<<"small";
    return 0;
    

}