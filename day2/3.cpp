#include<iostream>
#include<math.h>
using namespace std;

double  calculate(double x,double y){
	return pow(x,2) - pow(y,2);
}

int main() {
	double a, b;
	cout << "请输入要计算平方差的两个数值：" << endl;
	cin >> a >> b;
	cout << calculate(a, b) << endl;
	return 0;
}