//100个柜子，100个学生，第n个人从第n个柜子开始，每隔n个柜子改变其状态
#include <iostream>
using namespace std;
int main()
{
	bool list[101] = {};//写{false}或{ }都能让柜子初始关闭，但不初始化数组元素是随机的，完全错了
	for (int i = 1; i <= 100; i++)
	{
		for(int n=i;n<=100;n+=i)
		{ 
			list[n] = !list[n];
		}
	}
	cout << "最后开着的柜子的序号是：";
	for (int i = 1; i <= 100; i++)
	{
		if (list[i])
			cout << i<<" ";
	}
	return 0;
}
