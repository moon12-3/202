#include<iostream>
using namespace std;

class Point {
public :
	Point(int x1, int x2);
	void print();
private :
	int mX;
	int mY;
};

int main() {
	Point p1(1, 2);
	p1.print();
	return 0;
}

Point::Point(int x1, int x2)
	:mX(x1), mY(x2) {}

void Point::print() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}
