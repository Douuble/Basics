#include<iostream>
#define PI 3.14159
using namespace std;

inline double V(double r) {
	return 4 * PI * r*r * r / 3;
}

int main() {
	double r;
	cout << "��������İ뾶��" << endl;
	cin >> r;
	cout << "������Ϊ��" << V(r) << endl;
	return 0;
}