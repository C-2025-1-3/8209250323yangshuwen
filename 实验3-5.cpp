//猴子吃桃（一半+1，吃了10天）
#include<iostream>
using namespace std;
int main()
{
	//1-4-10
	//(i+1)*2
	int i = 1, count = 0;
	int q;
	while (count < 9)
	{
		q = (i + 1) * 2;//=右边的值赋值给左边//==相等判断
		i = q;
		count++;
	}
	cout << "第一天摘了" << q << "个桃子";
	return 0;

}