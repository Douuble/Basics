#include<iostream>
using namespace std;

int max(int a, int b, int c) {
	a = a > b ? a : b;
	a = a > c ? a : c;
	return a;
}

int main() {
	int x, y, z;
	cout << "请输入要比较的三个数：" << endl;
	cin >> x >> y >> z;
	cout << "三个数中最大的为：" << max(x, y, z) << endl;
	return 0;
}