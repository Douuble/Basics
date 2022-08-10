#include<iostream>
#define PI 3.14159
using namespace std;

inline double V(double r) {
	return 4 * PI * r*r * r / 3;
}

int main() {
	double r;
	cout << "请输入球的半径：" << endl;
	cin >> r;
	cout << "球的体积为：" << V(r) << endl;
	return 0;
}