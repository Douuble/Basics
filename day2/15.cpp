#include<iostream>
using namespace std;
int fun() {
	static int cnt = 0;
	cnt++; 
	return cnt;
}
int main() {
	int i, c;
	for (i = 1; i <= 10; i++) {
		c = fun();
		cout << c << endl;
	}
	return 0;
}