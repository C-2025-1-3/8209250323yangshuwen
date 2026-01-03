#include<iostream>
using namespace std;
//最大公因数 最小公倍数
void gys(int m, int n,int& g,int& l)
{ 
	int a = m, b = n;
	while (b!= 0)
	{
		int temp;
		temp=a%b;
		a=b;
		b= temp;
	}
	g = m;
	l = (m * n) / g;
}

int main()
{
	int m, n,g,l;
	cout << "请输入两个自然数；" << endl;
	cin >> m >> n;
	gys(m, n, g, l);
	cout << "最大公因数是：" << g << endl;
	cout << "最小公倍数是：" << l << endl;
	return 0;
}