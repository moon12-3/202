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
	Student(int Hakbun, const char* Name);
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
// ��ü ������ ���ÿ� ������� �ʱ�ȭ   // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "�Ϲݻ����� ȣ��" << endl;
	this->nHakbun = Hakbun;
	int len = strlen(Name) + 1; // �����Ҵ��� ������ ũ�⸦ ���ϰ�
	sName = new char[len];		// �� ũ�⸸ŭ �迭�� �����Ҵ�
	strcpy(sName, Name);		// �Ű������� �ִ� ���ڿ� ����
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