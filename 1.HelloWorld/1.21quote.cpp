#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int &ia=a;                  //左值引用
    cout<<"引用值："<<ia<<endl;
    ia=100;
    cout<<"修改值："<<a;
}