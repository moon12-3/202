#include<iostream>
#include<stdio.h>
#include<string.h>	//strcpy()�� ������ ����
#include<string>	//string Ŭ������ ������ ����

using namespace std;

int main() {
	char  cI[] = "aaa", cJ[]="aaa", cK[] = "abc";
	printf("%d\n", strcmp(cI, cJ) == 0);	// ���� ����
	printf("%d\n", strcmp(cI, cK) < 0);		// ������ aaa -> abc

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;		// ���� ����
	cout << (cppI < cppK) << endl;		// ������ aaa -> abc
}