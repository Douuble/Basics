/*x��n�η�����#include<math.h>�е�pow(x,n)����*/
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