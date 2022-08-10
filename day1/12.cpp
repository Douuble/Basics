#include<iostream>
using namespace std;
int main() {
	int x;
	int product = 1;
	cout << "请输入相乘的数值(当输入10时程序停止)：";
	do {
		cin >> x;
		product *= x;
	} while (x != 10);
	cout << "Product=" << product << endl;
	return 0;
}
