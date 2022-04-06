#include<iostream>	// 전처리기는 pre 컴파일러가 처리

using namespace std;

// 자료형에 영향 X
#define jegob(A)	A*A

int main() {

	cout << jegob(3) << endl;
	cout << 3 * 3 << endl;
	return 0;
}