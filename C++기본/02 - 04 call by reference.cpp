#include <iostream>

using namespace std;

void plus2(int& num) {	//시험에 낼거임 p.75
	num += 2;
}

int main() {
	int a = 3;
	plus2(a);
	cout << a << endl;	//5

	return 0;
}