#include<iostream>

using namespace std;

int main() {
	int a;

	int& ra = a;
	ra = 30;
	cout << a << endl;	// 30

	int* pa = &a;
	*pa = 50;
	cout << a << endl;	// 50
	return 0;
}