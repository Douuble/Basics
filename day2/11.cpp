#include<iostream>
using namespace std;
 
int func1(int x) {
	int a = 1, b = 2, c;
	c = a + b +x;
	return c;
}

int func2(int i, int j) {
	int k;
	k = func1(i * j);
	return k;
}

int main() {
	int a = 3, b = 6;
	cout << func1(a) << endl;
	cout << func2(a,b) << endl;
	return 0;

}