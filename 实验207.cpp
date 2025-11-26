#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		string spaces(5 - i, ' ');
		string stars(i, '*');
		cout << spaces << stars << endl;
	}
	return 0;
}