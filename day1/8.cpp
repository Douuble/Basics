#include<iostream>
using namespace std;
int main() {
	int a = 9, b = 3;
	char op;
	cout << "ÔËËãÊ½£ºa[ ]b" << endl;
	cout << "ÇëÊäÈëÔËËã·û[ ]£º" << endl;
	cin >> op;
	if (op == '+')
		cout << "a[ ]b=" << a + b << endl;
	else if (op == '-')
		cout << "a[ ]b=" << a - b << endl;
	else if (op == '*')
		cout << "a[ ]b=" << a * b << endl;
	else if (op == '/')
		cout << "a[ ]b=" << a / b << endl;
	else cout << "ÊäÈëÔËËã·û´íÎó£¡" << endl;
	return 0;
}