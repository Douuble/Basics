#include<iostream>
using namespace std;
int main() {
	int a=9, b=3;
	char op;
	cout << "����ʽ��a[ ]b" << endl;
	cout << "�����������[ ]��" << endl;
	cin >> op;
	switch (op) {
	case '+':
		cout << "a[ ]b=" << a + b << endl;
		break;
	case '-':		
		cout << "a[ ]b=" << a - b << endl;
		break;
	case '*':	
		cout << "a[ ]b=" << a * b << endl;
		break;
	case '/':
		cout << "a[ ]b=" << a / b << endl;
		break;
	default:cout << "�������������" << endl; break;
	}
	return 0;
}