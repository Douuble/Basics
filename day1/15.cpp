#include<iostream>
using namespace std;
int main() {
	int i, n, m = 0;
	int flag = 0;
	cout << "�������������ޣ�" << endl;
	cin >> n;
	for (i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			flag = 1;
			m++; continue;
		}
	}
	if (flag == 1) cout << "[1,n]�����ڴ���"<<m<<"���ܱ�3����������" << endl;
	else cout << "[1,n]�����ڲ������ܱ�3����������" << endl;
	return 0;
}