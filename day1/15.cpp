#include<iostream>
using namespace std;
int main() {
	int i, n, m = 0;
	int flag = 0;
	cout << "请输入区间上限：" << endl;
	cin >> n;
	for (i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			flag = 1;
			m++; continue;
		}
	}
	if (flag == 1) cout << "[1,n]区间内存在"<<m<<"个能被3整除的数！" << endl;
	else cout << "[1,n]区间内不存在能被3整除的数！" << endl;
	return 0;
}