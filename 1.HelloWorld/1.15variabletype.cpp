#include <iostream>
using namespace std;
/* auto变量，默认类型，作用于仅限变量个体，动态存储
 * static变量，函数调用结束不消失，程序退出时释放
 * register变量，存放在寄存器中，程序优化作用
 * extern变量，可以使用其他源文件的变量
*/

int add(int x)
{   int m =0;
    m+=x;
    return m;
}

int staticadd(int x)
{
    static int n=0;
    n+=x;
    return n;
}

int main()
{
    int i,j,sum1,sum2;
    cout<<"input the number"<<endl;
    cin>>i;
    cout<<"the result is:"<<endl;
    for(j=1;j<=i;j++)
    {
        sum1 = add(j);
        sum2 = staticadd(j);
        cout<<j<<":"<<sum1<<"vs"<<sum2<<endl;
       
    }

}
