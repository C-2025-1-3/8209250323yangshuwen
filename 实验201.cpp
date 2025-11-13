#include<iostream>
using namespace std;
int main() {
	char n;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	cin >> n;
	if (n >= 'a'&&n <= 'z') {
		cout << char(n - 32) << endl;
	}
	else{
		cout << int(n+1) << endl;
	}
	return 0;
	
}