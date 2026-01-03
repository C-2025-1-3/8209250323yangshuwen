//检验s1是否是s2的子串
#include <iostream>
#include <cstring>//!
using namespace std;
int indexOf(char s1[], char s2[])
{
	int len1 = strlen(s1);//!
	int len2 = strlen(s2);
	if (len1 == 0 || len1 > len2)return -1;
	for (int i = 0; i <= len2 - len1; i++)
	{
		bool match = true;
		for (int j = 0; j <= len1; j++)//
		{
			if (s1[j] != s2[i + j]) { match = false; break; }
		}
		if (match)return i;
	}
	return -1;
}
int main()
{
	const int max = 100;
	char s1[max], s2[max];
	cout << "请输入第一个字符串：";
	cin.getline(s1, max);//cin>>s1会以空格为分隔符；.getline(s1,max)可以读取带空格的字符串
	cout << "请输入第二个字符串：";
	cin.getline(s2, max);
	int result = indexOf(s1, s2);
	cout << result;
	return 0;
}