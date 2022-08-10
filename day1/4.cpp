#include<iostream>
using namespace std;
int main() {
	cout << "转义字符的应用：" << endl;
	cout << "ab c\t de\rf\tg" << endl;
	cout << "h\ti\b\bj k\n123\'\"\\\x41\102CDE" << endl;
	return 0;
}