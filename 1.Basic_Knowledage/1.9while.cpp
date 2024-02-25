#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int sum=0;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    cout<<"the result:"<<sum<<endl<<i;
    return 0;
}