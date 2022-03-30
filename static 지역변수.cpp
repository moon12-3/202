#include<iostream>
using namespace std;

void jiyuk() {
	// 지역변수는 함수 호출이 끝나면 사라짐
	int a = 0;
	cout << "정적 변수 a는" << a << endl;
	a++;
}

int main() {
	jiyuk();	// 0
	jiyuk();	// 0
	jiyuk();	// 0
	return 0;
}