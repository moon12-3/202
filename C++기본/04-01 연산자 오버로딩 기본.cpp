#include<iostream>
#include "04-01.h"
using namespace std;

int main() {
	Point p1(1, 2);
	Point p2(3, 4);

	Point sum = p1 + p2;
	sum.print();

	return 0;
}

//클래스 정의는 cpp 선언은 헤더파일