#include<iostream>
#include<stdio.h>
#include<string>	//string 클래스를 가지고 있음

using namespace std;

int main() {
	char cI[10] = "aaa";
	printf("%s \n", cI);		//문자열의 시작주소

	string cppI = "aaa";
	printf("%s\n", cppI.c_str());	//문자열의 시작주소

	return 0;
}