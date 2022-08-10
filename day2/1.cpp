#include<iostream>
#include<math.h>
using namespace std;

int Isprime(int n) {
	int i;
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
		else return 1;
}

int main() {
	int m;
	cout << "请输入要判断的数：" << endl;
	cin >> m;
	if (Isprime(m)) cout << "该数是素数！" << endl;
	else cout<< "该数不是素数！" << endl;
	return 0;
}