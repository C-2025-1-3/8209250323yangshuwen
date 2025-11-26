#include<iostream>
using namespace std;
int main()
{
	float i, aver, sum = 0;
	for (i = 2; i < 100; i = i * 2)
		sum = sum + i * 0.2;
	aver = static_cast<float>(sum) / 8;
	cout << "The average is " << aver << endl;
	return 0;
}