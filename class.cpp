#include<iostream>
#include<string.h>

using namespace std;

class Person 
{
	string sName;	// �̸�
protected :
	int nAge;	// ����
public :
	Person();
	Person(string, int);

	void hi();
};

class Student : private Person 
{
	int nHakbun;	// �й�
public :
	Student();
	Student(string, int, int);

	void study();
};

int main() 
{
	Person* per1 = new Person("����", 140);
	per1->hi();

	Student student;
	student.study();

	delete per1;
}

Person :: Person()
	: sName("�͸�"), nAge(0) {}
Person :: Person(string name, int age)
	: sName(name), nAge(age) {}

void Person ::hi()
{				
	cout << sName << "�� ���̴� " << nAge << "���Դϴ�." <<endl;
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