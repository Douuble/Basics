#include "func.h"
int fun1(int m) {
	return m * m;
}

int fun2(int x, int y) {
	return fun1(x) + fun1(y);
}