#include<iostream>

using namespace std;

int main() {
	int* ptr1 = new int;	// int형 공간 동적 할당
	*ptr1 = 20;

	cout << *ptr1 << endl;

	delete ptr1;

	int* ptr2 = new int[4];
	for (int i = 0; i < 4; i++) {
		ptr2[i] = 10 + i;
		cout << ptr2[i] << " ";
	}

	delete[]ptr2;
	
	return 0;
}