#include<iostream>
using namespace std;
int main() {
	int product = 1;
	int i = 1;
	while (i <= 10) {
		product = product * i;
		i++;
	}
	cout << "Product=" << product;
	return 0;
}