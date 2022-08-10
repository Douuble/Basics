#include<iostream>
using namespace std;

int p1 = 2, p2 = 4;
 
int max(int a, int b) {
	return a > b ? a : b;
}

int volume(int L = 2, int W = p1 + p2, int H = max(p1, p2)) {
	return L * W * H;
}

int main() {
	cout << "v0=" << volume() << endl;
	cout << "v1=" << volume(6) << endl;
	cout << "v2=" << volume(6, 12) << endl;
	cout << "v3=" << volume(6, 12, 18) << endl;
	return 0;
}