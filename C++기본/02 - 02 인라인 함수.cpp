#include<iostream>	// 전처리기는 pre 컴파일러가 처리

using namespace std;

// 자료형에 영향 X
// 디버깅이 불편함
//#define jegob(A)	((A)*(A)) 

// 컴파일러에서 처리 (디버깅이 가능)
// 자료형에 영향 O
inline int jegob(int A) {	// 실제 함수 호출 X(코드 치환)
	return A * A;
}

int main() {

	cout << jegob(3 + 1) << endl;	// 연산자 우선순위 때문에 의도치 않은 결과가 나옴 (7)
	cout << ((3 + 1) * (3 + 1)) << endl;
	return 0;
}