#include<iostream>	// ��ó����� pre �����Ϸ��� ó��

using namespace std;

// �ڷ����� ���� X
// ������� ������
//#define jegob(A)	((A)*(A)) 

// �����Ϸ����� ó�� (������� ����)
// �ڷ����� ���� O
inline int jegob(int A) {	// ���� �Լ� ȣ�� X(�ڵ� ġȯ)
	return A * A;
}

int main() {

	cout << jegob(3 + 1) << endl;	// ������ �켱���� ������ �ǵ�ġ ���� ����� ���� (7)
	cout << ((3 + 1) * (3 + 1)) << endl;
	return 0;
}