#include<iostream>
using namespace std;

int max(int a, int b, int c) {
	a = a > b ? a : b;
	a = a > c ? a : c;
	return a;
}

int main() {
	int x, y, z;
	cout << "������Ҫ�Ƚϵ���������" << endl;
	cin >> x >> y >> z;
	cout << "������������Ϊ��" << max(x, y, z) << endl;
	return 0;
}