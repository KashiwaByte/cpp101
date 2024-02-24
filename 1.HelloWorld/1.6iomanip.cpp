#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a =1234.123456789;
    cout<<a<<endl;
    cout<<setprecision(10)<<a<<endl; //设置输出精度为10    cout<<setfill(s);
    cout<<setw(12)<<a<<endl;
    cout.setf(ios::scientific);
    cout<<dec<<a<<endl;
    cout<<oct<<a<<endl;
    cout<<hex<<a<<endl;
    cout<<ends<<a<<endl;
    return 0;

}