#include<iostream>
using namespace std;

int main() {
	int x;
	cout << "ÇëÊäÈë±äÁ¿x£º" << endl;
	cin >> x;
	if (x > 0) {
		if (x < 10) cout << "y=" << x + 5;
		else cout << "y=" << x - 5;
	}
	else {
		if (x == 0) cout << "y=" << x;
		else cout << "y=" << x + 10;
	}
	return 0;
}