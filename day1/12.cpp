#include<iostream>
using namespace std;
int main() {
	int x;
	int product = 1;
	cout << "��������˵���ֵ(������10ʱ����ֹͣ)��";
	do {
		cin >> x;
		product *= x;
	} while (x != 10);
	cout << "Product=" << product << endl;
	return 0;
}
