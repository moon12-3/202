#include<iostream>
using namespace std;

void jungjuk() {
	// 정적 지역변수는 선언되는 순간부터 계속 유지
	static int a = 0;
	cout << "정적 변수 a는 " << a << endl;
	a++;
}

int main() {
	jungjuk();	// 0
	jungjuk();	// 1
	jungjuk();	// 2
	return 0;
}