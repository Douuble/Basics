#include<iostream>
#define PI 3.1415926
using namespace std;
int main() {
	int r;
	cout << "������Բ�İ뾶��" << endl;
	cin >> r;
	if (r > 0) {
		cout << "Բ���ܳ�=" << 2 * PI * r << endl;
		cout << "Բ�����=" << PI * r * r << endl;
	}
	else cout << "����뾶r����!" << endl;
	return 0;
}