#include <stdio.h>

int main(void) 
{
	int a = 0;
	int b = 0;
	int c = 0;

	// a�� 1�� ������ ���Ŀ� if���� ������ ó��
	// b�� c�� �������� ����
	if (++a || ++b && ++c)
		printf("��");

	printf("%d %d %d", a, b, c);

	return 0;
}