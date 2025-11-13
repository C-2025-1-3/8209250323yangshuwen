#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
    double f;
    cout << "请输入华氏温度：";
    cin >> f;
    double c =(f - 32)/1.8;
    cout << fixed << setprecision(2) << "摄氏温度为：" << c << endl;
    return 0;
}