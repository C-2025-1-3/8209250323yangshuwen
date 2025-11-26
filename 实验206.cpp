#include<iostream>
using namespace std;
int max(int, int);
int main()
{
	cout << "Please input two numbers";
	int a, b, i;
	cin >> a >> b;
	for (i = max(a, b); i >= 1; i--)
		if ((a % i == 0 && b % i == 0 && i >= 1) == 1)
		{
			int m;
			m = i;
			cout << "最大公因数：" << m << endl;
			break;
		}
	for (i = max(a, b); 1; i++)
		if ((i % a == 0 && i % b == 0) == 1)
		{
			int n;
			n = i;
			cout << "最小公倍数：" << n << endl;
			break;
		}
	return 0;
}
int max(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}