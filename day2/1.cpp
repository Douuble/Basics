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
	cout << "������Ҫ�жϵ�����" << endl;
	cin >> m;
	if (Isprime(m)) cout << "������������" << endl;
	else cout<< "��������������" << endl;
	return 0;
}