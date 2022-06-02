#include<iostream>
using namespace std;

class Point {
public :
	Point(int x1, int x2);
	Point();
	Point operator+(const Point& rhs)	// 바뀌지 않도록 const
	{
		Point p;
		p.mX = mX + rhs.mX;
		p.mY = mY + rhs.mY;

		return p;
	}

	void print();
private :
	int mX;
	int mY;
};

int main() {
	Point p1(1, 2);
	Point p2(3,4);
	
	Point sum = p1 + p2;
	sum.print();

	return 0;
}

Point::Point(int x1, int x2)
	:mX(x1), mY(x2) {}

Point::Point() {}

void Point::print() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}
