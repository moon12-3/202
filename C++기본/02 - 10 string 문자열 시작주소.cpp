#include<iostream>
#include<stdio.h>
#include<string>	//string Ŭ������ ������ ����

using namespace std;

int main() {
	char cI[10] = "aaa";
	printf("%s \n", cI);		//���ڿ��� �����ּ�

	string cppI = "aaa";
	printf("%s\n", cppI.c_str());	//���ڿ��� �����ּ�

	return 0;
}