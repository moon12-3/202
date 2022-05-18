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
	Student(const Student&);

	void show(void);
};

int main(void) {
	Student stu1= Student(1111, "JWP");	// �Ϲ� ������ ȣ��
	Student stu2 = stu1;	// ���� ������ ȣ��
	stu1.show();
	stu2.show();

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

Student::Student(const Student& rhs)
	: nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "��������� ȣ��" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;;
}