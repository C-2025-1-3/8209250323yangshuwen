//输出前200个素数，每10个为一行
#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)return false;
	if (num==2)return true;
	if (num % 2 == 0)return false;
	for (int i = 3; i * i <= num; i++)
	{
		if (num % i == 0)return false;
		else return true;
	}
}
int main()
{
	int count = 0;
	int num = 2;
	cout << "前200个素数：" << endl;
	while (count < 200)
	{
		if (is_prime(num))
		{
			cout << setw(5) <<num; 
			count++;
		}
		if (count % 10 == 0)
		{
			cout << endl;
		}
		num++;
	}
}