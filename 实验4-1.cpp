#include<iostream>//输入10个数
using namespace std;
int main()
{
	int input[10];
	int distinct[10];
	int count=0,i,j ;
	int* pinput = input;//定义指针指向数组首地址
	int* pdistinct = distinct;
	cout << "请输入十个数";
	for (i = 0; i < 10; i++)
	{
		cin >> *(pinput + i);
	}
	for (i = 0; i < 10; i++)
	{ 
		bool repeat = false;
		for (j = 0; j < count; j++)
		{
			if (*(pinput + i) == *(pdistinct + j))
			{
				repeat = true;
				break;
			}
		}
		if (!repeat)
		{
			*(pdistinct + count) = *(pinput + i);//count!!!
			count++;
		}
	}
	cout << "不重复的数有：";
	for (j = 0; j < count; j++)
	{
		cout << distinct[j]<< " ";
	}
	return 0;

}