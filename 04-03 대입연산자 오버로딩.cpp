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

	// 연산자 오버로딩
	Student& operator=(const Student&);	// 바로 초기화가 불가능(생성 후 사용하기 때문에)
	

	Student(const Student&);

	void show(void);
};

int main(void) {
	// 일반생성자(객체가 생성될 때 호출되는 함수) 호출
	Student stu1 = Student(1111, "JWP");
	Student stu3 = Student(2222, "JYP");
	stu1.show();

	// 복사 생성자 호출
	Student* stu2 = new Student(stu1);	
	stu2->show();

	// 대입 연산자 호출
	stu1 = stu3;	// 객체 생성 이후기 때문에 생성자가 아닌 대입연산자 호출
	// stu1.operator=(stu3);
	stu1.show();

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

Student& Student::operator=(const Student& rhs) 
{
	// 별도로 동적할당된 데이터가 있을 수 있기에 delete가 필요
	if (sName != nullptr) {
		delete[] sName;
		sName = nullptr;
	}

	cout << "대입연산자 호출" << endl;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;
	sName = new char[len];
	strcpy(sName, rhs.sName);
	return *this;
}