//由于需要创建源文件个数较多，受同学启发将所有代码放在一个文件里

/*code 1
#include<iostream>
using namespace std;

int main() {
	int i, a[5];
	cout << "请输入数组元素：" << endl;
	for (i = 0; i < 5; i++) cin >> a[i];
	for (i = 0; i < 5; i++) cout << a[i] << " ";
	return 0;
}
*/

/*code 2
#include<iostream>
using namespace std;

double ave(double grade[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum+=grade[i];
	}
	return sum / n;
}
int main() {
	double A[2] = { 2,4 };
	double B[4] = { 2,4,5,5 };
	cout << "A=" << ave(A, 2) << endl;
	cout << "B=" << ave(B, 4) << endl;
	return 0;
}
*/

/*Code 3
#include<iostream>
using namespace std;

int main()
{
	int i = 100, j = 200;
	int* p1, * p2;
	p1 = &i;
	p2 = &j;
	*p1 = *p1 + 1;
	p1 = p2;
	*p1 = *p1 + 1;
	cout << i << " " << j << endl;
	return 0;
}
*/

/*Code 4
#include<iostream>
using namespace std;

int main()
{
	int a[10];

	for (int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	cout << "下标法遍历:" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
*/

/*Code 5
#include<iostream>
using namespace std;

int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++) cin >> *(a + i);
	for (i = 0; i < 10; i++) cout << *(a + i) << " ";
	return 0;
}
*/

/*Code 6
#include<iostream>
using namespace std;

int main()
{
	int a[3], * p;
	for (p = a; p < a + 3; p++) cin >> *p;
	for (p = a; p < a + 3; p++) cout << *p << " ";
	return 0;
}
*/

/*Code 7
#include<iostream>
using namespace std;
void swap(int* p1, int* p2) {
	int t;
	t = *p1; *p1 = *p2; *p2 = t;
}

int main() {
	int a, b;
	cout << "请输入要交换的数：" << endl;
	cin >> a >> b;
	swap(&a, &b);
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
}
*/

/*Code 8
#include<iostream>
using namespace std;
void swap(int& p1, int& p2) {
	int t;
	t = p1; p1 = p2; p2 = t;
}

int main() {
	int a, b;
	cout << "请输入要交换的数：" << endl;
	cin >> a >> b;
	swap(a, b);
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
}
*/

/*Code 9
#include<iostream>
using namespace std;
double function(double a, double b, double* sqab, double* inab, double* avg) {
	*sqab = a * a + b * b;
	*inab = log(a) + log(b);
	*avg = (a + b) / 2;
	return (sqrt(a + b));
}
int main() {
	double x = 10, y = 12, fsq, fln, favg, fsqr;
	fsqr = function(x, y, &fsq, &fln, &favg);
	cout << x << "," << y << "," << fsq << "," << fln << "," << favg << "," << fsqr << endl;
	return 0;
}
*/

/*Code 10
#include<iostream>
using namespace std;
double function(double a, double b, double& sqab, double& inab, double& avg) {
	sqab = a * a + b * b;
	inab = log(a) + log(b);
	avg = (a + b) / 2;
	return (sqrt(a + b));
 }
int main() {
	double x = 10, y=12, fsq, fln, favg, fsqr;
	fsqr = function(x, y, fsq, fln, favg);
	cout << x << "," << y << "," << fsq << "," << fln << "," << favg << "," << fsqr << endl;
	return 0;
}
*/
