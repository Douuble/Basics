#include<iostream>
using namespace std;

int gcd(int m, int n);

int main() {
	int m, n;
	cout << "������������Լ����������" << endl;
	cin >> m >> n;
	cout<<"���Լ��Ϊ��" << gcd(m, n) << endl;
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
