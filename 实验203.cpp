#include <iostream>
using namespace std;
int main() {
	double a, b, c, d;
	cout << "请输入三角形三条边：" << endl;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		d = a + b + c;
		cout << "周长为：" << d;
		if (a == b || b == c || c == a) {
			cout << "此三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "此三角形不是等腰三角形" << endl;
		}
	}
	else { cout << "不构成三角形" << endl; }
	return 0;
}


}