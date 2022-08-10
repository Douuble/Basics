#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float a = 3.1415926f;
	//float a = 3.1415926;
	double b = 3.1415926;
	a = a + 222222.222f;
	b = b + 222222.222;
	cout << setiosflags(ios::fixed) << setprecision(16);
	cout << "a=" << a << "    b=" << b << endl;
	return 0;
}