/*#include<iostream>
using namespace std;

class AreaClass {
public:
protected:
	double height;
	double width;
};

class Box:public AreaClass {
public:
	Box(int height, int width);
	Box() {
		height = 3;
		width = 4;
	}
	Box(Box& b) {
		height = b.height;
		width = b.width;
	}
	int Area() {
		return height * width;
	}
};

Box::Box(int H,int W) {
	height = H;
	width = W;
}

class Isosceles :public AreaClass {
public:
	Isosceles() {
		height = 3;
		width = 4;
	}
	Isosceles(int H, int W);
	Isosceles(Isosceles &i) {
		height = i.height;
		width = i.width;
	}
	int Area() {
		return height * width/2;
	}
};

Isosceles::Isosceles(int H, int W) {
	height = H;
	width = W;
}

int main() {
	Box b;                  //�޲ι��캯��
	Box b2(4, 5);           //�вι��캯��
	Box b3(b2);             //���ƹ��캯������ͬ
	Isosceles i;
	Isosceles i2(4, 5);
	Isosceles i3(i2);        
	cout << "b=" << b.Area() << " b2=" << b2.Area() << " b3=" << b3.Area() << endl;
	cout << "i=" << i.Area() << " i2=" << i2.Area() << " i3=" << i3.Area() << endl;
}
*/

/*
#include<iostream>
using namespace std;

class Clock {
public:
	Clock(int newH, int newM, int newS);   //�вι���
	Clock() {                              //�޲ι���
		hour = 0;
		minute = 0;
		second = 0;
	}
	Clock(Clock& c) {                      //���ƹ��캯��
		hour = c.hour;
		minute = c.minute;
		second = c.second;
		cout << "���ƹ��캯���ѵ��ã�" << endl;
	}
	~Clock() {
		cout << "���������ѵ��ã�" << endl;
	}
	void setTime(int newH = 0, int newM = 0, int newS = 0); //��Ա����
	void showTime();
private:
	int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

int main() {
	Clock myclock;
	Clock yourclock(9, 00, 00);
	Clock copyclock1(myclock);
	Clock copyclock2(yourclock);
	myclock.showTime();
	yourclock.showTime();
	copyclock1.showTime();
	copyclock2.showTime();
	return 0;
}
*/