#include<iostream>
using namespace std;

void jungjuk() {
	// ���� ���������� ����Ǵ� �������� ��� ����
	static int a = 0;
	cout << "���� ���� a�� " << a << endl;
	a++;
}

int main() {
	jungjuk();	// 0
	jungjuk();	// 1
	jungjuk();	// 2
	return 0;
}