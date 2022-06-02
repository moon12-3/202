#include<iostream>
#include<string.h>

using namespace std;

class Person 
{
	string sName;	// 이름
protected :
	int nAge;	// 나이
public :
	Person();
	Person(string, int);

	void hi();
};

class Student : private Person 
{
	int nHakbun;	// 학번
public :
	Student();
	Student(string, int, int);

	void study();
};

int main() 
{
	Person* per1 = new Person("감자", 140);
	per1->hi();

	Student student;
	student.study();

	delete per1;
}

Person :: Person()
	: sName("익명"), nAge(0) {}
Person :: Person(string name, int age)
	: sName(name), nAge(age) {}

void Person ::hi()
{				
	cout << sName << "의 나이는 " << nAge << "살입니다." <<endl;
}

Student :: Student() 
{
	nHakbun = 0;
}

Student :: Student(string name, int age, int hakbun) 
	: Person(name, age), nHakbun(hakbun) {}

void Student::study() 
{
	hi();
	cout << nAge << endl;
}