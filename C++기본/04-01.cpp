#include<iostream>
#include "04-01.h"

using namespace std;

Point::Point(int x1, int x2)
	:mX(x1), mY(x2) {}

Point::Point() {}

void Point::print() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}

Point Point:: operator+(const Point& rhs)	// 바뀌지 않도록 const
{
	Point p;
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;

	return p;
}
