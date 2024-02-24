#include <iostream>
using namespace std;
// 函数声明
void ShowMessage();
void ShowAge();

// 主函数
int main()
{
    ShowAge();
    ShowMessage();
}

// 函数定义
void ShowMessage()
{
    cout<<"Hello World"<<endl;
}

void ShowAge()
{
    int i=1;
    cout<<"Age is:"<<i<<endl;
}
