#include<iostream>
using namespace std;

int gcd(int m, int n);

int main() {
	int m, n;
	cout << "请输入求解最大公约数的两数：" << endl;
	cin >> m >> n;
	cout<<"最大公约数为：" << gcd(m, n) << endl;
	return 0;
}

int gcd(int m, int n) {
	int r;
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
