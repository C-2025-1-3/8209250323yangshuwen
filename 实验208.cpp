
#include<iostream>
using namespace std;
int main()
{
	cout << "Please input a number:";
	float a;
	cin >> a;
	if (a >= 0)
	{
		for (float x = a; ; x = (x + a / x) / 2)
		{
			if (((a / x - x) / 2 < 1e-5) && ((a / x - x) / 2 > -1e-5) == 1)
			{
				cout << "The square root of the number is " << x << endl;
				break;
			}
			else
				continue;
		}
	}
	else
		cout << "Not defined!" << endl;
	return 0;
}
