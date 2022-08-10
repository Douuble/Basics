#include<iostream>
using namespace std;
int i = 10;

int main() {
	int i;
	i = 25;
	::i = 30;
	cout << "local i=" << i << endl;
	cout << "global i=" << ::i << endl;
	return 0;

}