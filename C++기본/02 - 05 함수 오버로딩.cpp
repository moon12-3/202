#include<iostream>

using namespace std;

// 함수 오버로딩 (함수 이름은 같고, 매개변수는 다름)
int jegob(int A, int B=1) {
	return A * A + B;
}

double jegob(double A, double B=1.1) {
	return A * A + B;
}

int main() {
	cout << jegob(4) << endl;	//17
	cout << jegob(3.3) << endl;	//11.99
	
	return 0;
}