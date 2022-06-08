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

	// ������ �����ε�
	Student& operator=(const Student&);	// �ٷ� �ʱ�ȭ�� �Ұ���(���� �� ����ϱ� ������)
	

	Student(const Student&);

	void show(void);
};

int main(void) {
	// �Ϲݻ�����(��ü�� ������ �� ȣ��Ǵ� �Լ�) ȣ��
	Student stu1 = Student(1111, "JWP");
	Student stu3 = Student(2222, "JYP");
	stu1.show();

	// ���� ������ ȣ��
	Student* stu2 = new Student(stu1);	
	stu2->show();

	// ���� ������ ȣ��
	stu1 = stu3;	// ��ü ���� ���ı� ������ �����ڰ� �ƴ� ���Կ����� ȣ��
	// stu1.operator=(stu3);
	stu1.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
{

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

Student& Student::operator=(const Student& rhs) 
{
	// ������ �����Ҵ�� �����Ͱ� ���� �� �ֱ⿡ delete�� �ʿ�
	if (sName != nullptr) {
		delete[] sName;
		sName = nullptr;
	}

	cout << "���Կ����� ȣ��" << endl;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;
	sName = new char[len];
	strcpy(sName, rhs.sName);
	return *this;
}