#include <iostream>
using namespace std;
long Fac(int n)
{   
    if(n==0)
        return 1;
    else
        return n*Fac(n-1);
}
int main()
{   
   int a=5;
   cout<<Fac(a);

   return 0;

}