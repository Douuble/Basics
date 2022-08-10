#include<iostream>
#include "func.h"
using namespace std;

int main() {
	int a, b;
	cout << "请输入参与运算的数：" << endl;
	cin >> a >> b;
	cout << a << "与" << b << "两数的平方和为：" << fun2(a,b) << endl;
	return 0;
}
