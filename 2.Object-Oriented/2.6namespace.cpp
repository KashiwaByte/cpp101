#include <iostream>
using namespace std;

namespace class1
{
    int student = 10;
}

namespace class2
{
    int student = 20;
}

namespace class3
{
    int teachers =100;
}
int student = 100;

using namespace class3;
int main()
{
    cout<<"class1:"<<class1::student<<endl;
    cout<<"class2:"<<class2::student<<endl;
    cout<<"global:"<<student<<endl;
    cout<<"class3:"<<teachers<<endl;
}