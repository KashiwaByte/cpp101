#include <iostream>
using namespace std;
struct personalinfo
    {
        int age;
        bool gender;
        char name[10];
    };
void printinfo(struct personalinfo a)
{
    cout<<a.age<<endl;
    cout<<a.gender<<endl;
    cout<<a.name<<endl;
}
int main()
{
   personalinfo perin1,perin2={11,false,"kaka"},*perpointer;

    printinfo(perin2);

    return 0;
}
