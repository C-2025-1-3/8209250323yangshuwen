//十个小数从小到大排序
#include<iostream>
using namespace std;
void bubblesort(double* list, int listsize)//数组指针，数组长度
{
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0; i < listsize - 1; i++)
		{
			if (list[i] > list[i + 1])
			{
				double temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}

int main()
{   
	const int listsize = 10;//常量
	double list[listsize];
	double* plist = list;//?
	cout << "请输入10个双精度数：" << endl;
	for (int i = 0; i < listsize; i++)cin >>list[i];
	bubblesort(list, listsize);
	cout << "从小到大排序为：" << endl;
	for (int i = 0; i < listsize; i++)cout<< list[i]<<" ";
	return 0;
}