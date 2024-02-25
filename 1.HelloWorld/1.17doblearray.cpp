#include <iostream>
using namespace std;
int main()
{   // 一维数组与赋值
    int a[3][2]; 
    int b[4][3]={0,45,4,6,8,4,6,8};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            cin>>a[i][j];
    }
    cout<<a[2][1]<<endl;
    cout<<b[1][2];

    return 0;
}