#include <iostream>
using namespace std;
int main()
{
    struct personalinfo
    {
        int age;
        bool gender;
        char name[10];
    }perin1,perin2={11,false,"kaka"},*perpointer;
    perin1.age=10;
    perin1.gender=true;
    perpointer = &perin2;
    cout<<perpointer->age<<endl;      //结构体指针的指向运算符



    
    
}