#include <iostream>

using namespace std;

void plus2(int& num) {
	num += 2;
}

int main() {
	int a = 3;
	plus2(a);
	cout << a << endl;	//5

	return 0;
}