//字符串中每个字母出现的次数
#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[])
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{ 
		int ch = s[i];
		if (ch > 'a' && ch < 'z' || ch>'A' && ch < 'Z')
		{
			if (ch > 'a' && ch < 'z')
			{
				ch = ch - 32;
			}
			int m = ch - 'A';
			counts[m]++;
		}
	}
}
int main()
{
	int counts[26] = { 0 };
	char s[100];
	cout << "请输入一个字符串：";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0) 
		{
			char m = i + 'a';
			cout<<m<<":"<<counts[i]<<"times" << endl;
		}
	}
}