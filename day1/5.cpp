#include<iostream>
#include<math.h>
#define Pi 3.1415926
using namespace std;
int main() {
	double r;
	cout << "请输入球的半径:" << endl;
	cin >> r;
	cout << "球的体积=" << 4 * Pi * powf(r, 3)/ 3  << endl;
	cout << "球的表面积=" << 4 * Pi * powf(r, 2) << endl;
	return 0;
}