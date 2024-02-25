#include <iostream>
using namespace std;
int main()
{
    enum gender{man,woman}; //enmu能把int常量的字面值包装成字符代码
  
    if (man == 0)
        cout<<"man"<<endl;
    
    if( woman == 1)
        cout<<"woman";
}