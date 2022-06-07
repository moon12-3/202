class Point {
public:
	Point(int x1, int x2);
	Point();
	Point operator+(const Point& rhs);
	void print();
private:
	int mX;
	int mY;
};
