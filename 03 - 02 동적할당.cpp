#include<iostream>

using namespace std;

int main() {
	int* ptr1 = new int;	// int형 공간 동적 할당
	*ptr1 = 20;

	cout << *ptr1 << endl;

	delete ptr1;
	return 0;
}