#include<iostream>
using namespace std;
int main() {
	int a = 9, b = 3;
	char op;
	cout << "����ʽ��a[ ]b" << endl;
	cout << "�����������[ ]��" << endl;
	cin >> op;
	if (op == '+')
		cout << "a[ ]b=" << a + b << endl;
	else if (op == '-')
		cout << "a[ ]b=" << a - b << endl;
	else if (op == '*')
		cout << "a[ ]b=" << a * b << endl;
	else if (op == '/')
		cout << "a[ ]b=" << a / b << endl;
	else cout << "�������������" << endl;
	return 0;
}