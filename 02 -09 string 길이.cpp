#include<iostream>
#include<stdio.h>
#include<string.h>	//strcpy()�� ������ ����
#include<string>	//string Ŭ������ ������ ����

using namespace std;

int main() {
	char cI[10] = "aaa";
	printf("%d\n",strlen(cI));

	string cppI = "aaa";
	cout << cppI.size() << endl;
	cout << cppI.length() << endl;

	return 0;
}