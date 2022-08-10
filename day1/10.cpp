#include<iostream>
using namespace std;
int main() {
	int a=9, b=3;
	char op;
	cout << "ÔËËãÊ½£ºa[ ]b" << endl;
	cout << "ÇëÊäÈëÔËËã·û[ ]£º" << endl;
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
	default:cout << "ÊäÈëÔËËã·û´íÎó£¡" << endl; break;
	}
	return 0;
}