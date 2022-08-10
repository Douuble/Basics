#include<iostream>
using namespace std;

inline int calculate(double x, int n) {
	double result = 1.0;
	while (n--)  result = result * x;
	return result;
}

int main() {
	cout << "2^3+3^4=" << calculate(2, 3) + calculate(3, 4) << endl;
	return 0;
}