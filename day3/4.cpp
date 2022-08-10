/*Code 1
#include<iostream>
using namespace std;

class Clock {
public:
	void Settime(int newH = 0, int newM = 0, int newS = 0);
	void Showtime();
private:
	int hour, minute, second;
};

inline void Clock::Showtime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

void Clock::Settime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

int main()
{
	Clock myclock;
	cout << "First time set and output:" << endl;
	myclock.Settime();
	myclock.Showtime();
	cout << "Second time set and output:" << endl;
	myclock.Settime(8, 30, 30);
	myclock.Showtime();
}
*/

/*Code2
#include<iostream>
using namespace std;

class Clock {
public:
	Clock(int newH, int newM, int newS);
	void Settime(int newH = 0, int newM = 0, int newS = 0);
	void Showtime();
private:
	int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::Showtime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

void Clock::Settime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

int main()
{
	Clock myclock(0,0,0);
	cout << "First time set and output:" << endl;
	myclock.Settime();
	myclock.Showtime();
	cout << "Second time set and output:" << endl;
	myclock.Settime(8, 30, 30);
	myclock.Showtime();
}
*/

/*Code 3
#include<iostream>
using namespace std;

class Clock {
public:
	Clock( int newH,int newM,int newS);
	Clock()
	{
		hour = 0;
		minute = 0;
		second = 0;
	}
	void Settime(int newH = 0, int newM = 0, int newS = 0);
	void Showtime();
private:
	int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::Showtime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

void Clock::Settime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

int main()
{
	Clock myclock;
	Clock yourclock(9, 00, 00);
	cout << "First time set and output:" << endl;
	myclock.Showtime();
	cout << "Second time set and output:" << endl;
	yourclock.Showtime();
}
*/

/*Code4
#include<iostream>
using namespace std;

class Point
{
public:
	Point(int xx = 0, int yy = 0)
	{
		x = xx;
		y = yy;
	}
	Point(Point& p);
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
private:
	int x, y;
};

Point::Point(Point& p)
{
	y = p.y;
	x = p.x;
	cout << "Calling the copy constructer" << endl;
}

void fun1(Point p)
{
	cout << p.getx() << endl;
}

Point fun2()
{
	Point a(1, 2);
	return a;
}

int main()
{
	Point a(4, 5);
	Point b = a;
	cout << b.getx() << endl;
	fun1(b);
	b = fun2();
	cout << b.getx() << endl;
	return 0;
}
*/

/*Code 5
#include<iostream>
using namespace std;

class Point
{
public:
	Point(int xx = 0, int yy = 0)
	{
		x = xx;
		y = yy;
	}
	Point(Point& p);
	~Point()
	{
		cout << "调用析构函数" << endl;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
private:
	int x, y;
};

Point::Point(Point& p)
{
	y = p.y;
	x = p.x;
	cout << "Calling the copy constructer" << endl;
}

void fun1(Point p)
{
	cout << p.getx() << endl;
}

Point fun2()
{
	Point a(1, 2);
	return a;
}

int main()
{
	Point a(4, 5);
	Point b = a;
	cout << b.getx() << endl;
	fun1(b);
	b = fun2();
	cout << b.getx() << endl;
	cout << "退出主函数" << endl;
	return 0;
}
*/

/*Code 6
#include<iostream>
using namespace std;

class Point
{
public:
	Point(int xx = 0, int yy = 0):x(xx), y(yy)
	{
		count++;
	}
	Point(Point& p)
	{
		x = p.x;y = p.y;
		count++;
	}
	~Point()
	{
		count--;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	void showcount()
	{
		cout << "Objext count=" << count << endl;
	}
private:
	int x, y;
	static int count;
};

int Point::count = 0;

int main()
{
	Point a(4, 5);
	cout << "Point A:" << a.getx() << "," << a.gety();
	a.showcount();
	Point b(a);
	cout << "Point B:" << b.getx() << "," << b.gety();
	b.showcount();
	return 0;
}
*/

/*Code 7
#include<iostream>
using namespace std;

class Point
{
public:
	Point(int xx = 0, int yy = 0):x(xx), y(yy)
	{
		count++;
	}
	Point(Point& p)
	{
		x = p.x;y = p.y;
		count++;
	}
	~Point()
	{
		count--;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	static void showcount()
	{
		cout << "Objext count=" << count << endl;
	}
private:
	int x, y;
	static int count;
};

int Point::count = 0;

int main()
{
	Point a(4, 5);
	cout << "Point A:" << a.getx() << "," << a.gety();
	Point::showcount();
	Point b(a);
	cout << "Point B:" << b.getx() << "," << b.gety();
	Point::showcount();
	return 0;
}
*/

/*Code 8
#include<iostream>
using namespace std;

class Point {
public:
	Point(int xx = 0, int yy = 0):x(xx), y(yy) { count++; } //有参构造函数
	Point(Point& p) {                                       //复制构造函数
		x = p.x;
		y = p.y;
		count++;
	};
	~Point() { count--; }
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	static void showCount() {
		cout << "  Object cout=" << count << endl;
	}
private:
	int x, y;
	static int count;
};

int Point::count = 0;

int main() {
	Point a(4, 5);
	cout << "Point A:" << a.getX() << "," << a.getY();
	Point::showCount();
	Point b(a);
	cout << "Point B:" << b.getX() << "," << b.getY();
	Point::showCount();
	return 0;
}
*/

/*Code 9
#include<iostream>
#include<cmath>
using namespace std;

class Point {
public:
	Point(int xx, int yy) {
		x = xx;
		y = yy;
	}
	Point(Point& p);
	int GetX() { return x; }
	int GetY() { return y; }
private:
	int x, y;
};

Point::Point(Point &p){
	x = p.x;
	y = p.y;
	cout << "Point拷贝构造函数被调用" << endl;
}

class Distance {
public:
	Distance(Point a, Point b);
	double GetDis() {
		return dist;
	}
private:
	Point p1, p2;
	double dist;
};

Distance::Distance(Point a, Point b):p1(a), p2(b) {
	cout << "Distance构造函数被调用：" << endl;
	double x = double(p1.GetX() - p2.GetX());
	double y=double(p1.GetY() - p2.GetY());
	dist = sqrt(x * x + y * y);
}

int main() {
	Point myp1(1, 1), myp2(4, 5);
	Distance myd(myp1, myp2);
	cout << "The distance is:";
	cout << myd.GetDis() << endl;
	return 0;
}
*/

/*Code 10
#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
	Point(int xx, int yy) {
		x = xx;
		y = yy;
	}
	Point(Point& p);
	int GetX() { return x; }
	int GetY() { return y; }
private:
	int x, y;
};

Point::Point(Point& p) {
	x = p.x;
	y = p.y;
	cout << "Point拷贝构造函数被调用" << endl;
}

class Distance {
public:
	Distance(Point a, Point b);
	Distance(Distance &d);
	double GetDis() {
		return dist;
	}
private:
	Point p1, p2;
	double dist;
};

Distance::Distance(Point a, Point b) :p1(a), p2(b) {
	cout << "Distance构造函数被调用：" << endl;
	double x = double(p1.GetX() - p2.GetX());
	double y = double(p1.GetY() - p2.GetY());
	dist = sqrt(x * x + y * y);
	return;
}

Distance::Distance(Distance& d) :p1(d.p1), p2(d.p2){
	cout << "Distance复制构造函数被调用" << endl;
	dist = d.dist;
}

int main() {
	Point myp1(1, 1), myp2(4, 5);
	Distance myd(myp1, myp2);
	Distance my2(myd);
	cout << "The distance is:";
	cout << myd.GetDis() << endl;
	cout << my2.GetDis() << endl;
	return 0;
}
*/

/*Code 11
#include<iostream>
#include<string>
using namespace std;

class Girl {
public:
	Girl(char* n, int d) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		age = d;
	}
	friend void disp(Girl& x);
	~Girl() {
		delete name;
	}
private: char* name;
	   int age;
};

void disp(Girl& x) {
	cout << "女孩的名字是：" << x.name << ",年龄：" << x.age << endl;
}

int main() {
	Girl gl((char*)"陈小丽",18);
	disp(gl);
	return 0;
}
*/