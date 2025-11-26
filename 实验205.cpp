#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	cout << "请输入一段话：";
	char c;
	int x = 0, y = 0, z = 0, m = 0;
	while ((c = getchar()) != '\n')
	{
		if (static_cast<int>(c) >= 48 && c <= 57)
			x++;
		else if (static_cast<int>(c) == ' ')
			y++;
		else if ((static_cast<int>(c) >= 65 && static_cast<int>(c) <= 90) || (static_cast<int>(c) >= 97 && static_cast<int>(c) <= 122))
			z++;
		else
			m++;
	}
	cout << "英文字母数：" << z << '\n' << "空格数：" << y << '\n' << "数字字符数：" << x << '\n' << "其他字符数：" << m << endl;
	return 0;
}