#include<iostream>
using namespace std;

int fun2(int z);
int fun1(int x,int y) {
	return fun2(x)+fun2(y);
}

int fun2(int z) {
	return z * z;
}

int main() {
	int i, j;
	cout << "请输入求平方和的数值：" << endl;
	cin >> i >> j;
	cout << "平方和为：" << fun1(i, j) << endl;
	return 0;
}