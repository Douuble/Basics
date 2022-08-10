#include<iostream>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int max(int a, int b, int c) {
	a = a > b ? a : b;
	a = a > c ? a : c;
	return a;
}

int main() {
	int a, b, i = 8, j = 6, k = 11;
	cout << "前两个数中最大的数为：" << max(i, j) << endl;
	cout << "三个数中最大的数为：" << max(i, j,k) << endl;
	return 0;
}