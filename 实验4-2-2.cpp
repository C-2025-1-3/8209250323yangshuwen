#include<iostream>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++)
	{  
		int m=0;
		char ch = hexString[i];
		if (ch >= '0' && ch <= '9') m = ch-'0';
		else if (ch >= 'A' &&ch <= 'F')m = ch - 65+10;
		result = result * 16 + m;
	}
	return result;
}
int main()
{
	char hexString[100];
	cout << "请输入一个16进制数：";
	cin >> hexString;
	int result = parseHex(hexString);
	cout << "转化成十进制数是：" << result;
	return 0;
}
