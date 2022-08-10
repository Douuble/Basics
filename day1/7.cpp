#include<iostream>
#define PI 3.1415926
using namespace std;
int main() {
	int r;
	cout << "请输入圆的半径：" << endl;
	cin >> r;
	if (r > 0) {
		cout << "圆的周长=" << 2 * PI * r << endl;
		cout << "圆的面积=" << PI * r * r << endl;
	}
	else cout << "输入半径r错误!" << endl;
	return 0;
}