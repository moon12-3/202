#include<iostream>
#include<stdio.h>
#include<string.h>	//strcpy()�� ������ ����
#include<string>	//string Ŭ������ ������ ����

using namespace std;

int main() {
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);

	std::string cppMunja = "cpp_insert";
	cout << cppMunja << endl;
	return 0;
}