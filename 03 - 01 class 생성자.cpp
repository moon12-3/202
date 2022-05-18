#include <iostream>
#include <string.h> 

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student(int Hakbun, const char* Name);	//const ������ ������
	// �Ҹ��� : ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();

	void show(void);
};

int main(void) {
	Student stu1 = Student(1111, "JWP");
	stu1.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name) 
: nHakbun(Hakbun) 
{
// ��ü ������ ���ÿ� ������� �ʱ�ȭ   // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	cout << "�Ϲݻ����� ȣ��" << endl;
	int len = strlen(Name) + 1;	// �������� ����
	sName = new char[len];
	strcpy(sName, Name);
};

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;;
}