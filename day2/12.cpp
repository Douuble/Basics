#include<iostream>
using namespace std;

int fun2(int z);
int fun1(int x,int y) {
	return fun2(x)+fun2(y);
}

int fun2(int z) {
	return z * z;
}

int main() {
	int i, j;
	cout << "��������ƽ���͵���ֵ��" << endl;
	cin >> i >> j;
	cout << "ƽ����Ϊ��" << fun1(i, j) << endl;
	return 0;
}