#include<iostream>

using namespace std;

// �Լ� �����ε� (�Լ� �̸��� ����, �Ű������� �ٸ�)
int jegob(int A, int B) {
	return A * A + B;
}

double jegob(double A, double B) {
	return A * A + B;
}

int main() {
	cout << jegob(4, 1) << endl;
	cout << jegob(3.3, 1.1) << endl;
	
	return 0;
}