#include<iostream>
using namespace std;

int max(int a, int b) {
	return(a > b ? a : b);
}

double max(double a, double b) {
	return(a > b ? a : b);
}

long max(long a, long b) {
	return(a > b ? a : b);
}

int main() {
	int i = 8, j = -8, k;
	k = max(i, j);
	cout << "int max=" << k << endl;

	double x = 123.4, y = -123.4, z;
	z = max(x, y);
	cout << "double max=" << z << endl;
	
	long l = 10070110, m = -10070110, n;
	n= max(l, m);
	cout << "long max=" << n << endl;

	return 0;

}