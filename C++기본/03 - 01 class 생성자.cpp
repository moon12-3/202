#include <iostream>
#include <string.h> 

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	Student(int Hakbun, const char* Name);	//const 없으면 오류남
	// 소멸자 : 객체가 메모리에서 해제될 때, 호출되는 함수
	~Student();
	Student(const Student&);

	void show(void);
};

int main(void) {
	Student stu1= Student(1111, "JWP");	// 일반 생성자 호출
	Student* stu2 = new Student(stu1);	// 복사 생성자 호출
	stu1.show();
	stu2->show();

	return 0;
}

Student::Student(int Hakbun, const char* Name) 
: nHakbun(Hakbun) 
{

	cout << "일반생성자 호출" << endl;
	int len = strlen(Name) + 1;	// 공간개수 측정
	sName = new char[len];
	strcpy(sName, Name);
};

Student::Student(const Student& rhs)
	: nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "복사생성자 호출" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "소멸자 호출" << endl;
}

void Student::show(void) {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;;
}