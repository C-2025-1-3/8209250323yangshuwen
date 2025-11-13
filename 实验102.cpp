#include <iostream>
using namespace std;

#define PI 3.1415926  

int main() {
    double radius, height, volume;  

    
    cout << "请输入圆锥底面半径：";
    cin >> radius;
    cout << "请输入圆锥的高：";
    cin >> height;

  
    volume = (1.0 / 3) * PI * radius * radius * height;

    
    cout << "圆锥的体积为：" << volume << endl;

    return 0;
}