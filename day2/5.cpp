/*x的n次方可用#include<math.h>中的pow(x,n)计算*/
#include<iostream>
using namespace std;

double power(double x, int n) {
	double result = 1.0;
	while (n--) result = result * x;
	return result;
}

int main() {
	cout << "2 to power 10 is " << power(2, 10) << endl;
	return 0;
}