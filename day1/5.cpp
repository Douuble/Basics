#include<iostream>
#include<math.h>
#define Pi 3.1415926
using namespace std;
int main() {
	double r;
	cout << "��������İ뾶:" << endl;
	cin >> r;
	cout << "������=" << 4 * Pi * powf(r, 3)/ 3  << endl;
	cout << "��ı����=" << 4 * Pi * powf(r, 2) << endl;
	return 0;
}