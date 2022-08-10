#include<iostream>
using namespace std;
int main() {
	int i, j;
	cout << "九九乘法表如下：" << endl;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			cout << i << "*" << j << "=" << i * j<<" ";
			if (j == 9) cout << endl;
		}
	}
	return 0;
}