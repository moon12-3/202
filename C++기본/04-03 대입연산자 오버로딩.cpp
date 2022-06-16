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

class HighSchoolStudent : public Student
{
private :
	string sHakgwa;
public:
	HighSchoolStudent(int Hakbun, const char* Name, string Hakgwa)
		: Student(Hakbun, Name), sHakgwa(Hakgwa)
	{
		cout << "HighSchoolStudent �Ϲݻ����� ȣ��" << endl;
	}
	// �Ҹ���
	~HighSchoolStudent()
	{
		cout << "HighSchoolStudent �Ҹ��� ȣ��";
	}

	
};
int main(void) {
	HighSchoolStudent hss = HighSchoolStudent(1111, "JWP", "soft");
	hss.show();	// �θ�Ŭ������ ����Լ��� ���
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
{
	cout << "Student ������ ȣ��" << endl;
	int len = strlen(Name) + 1;	// �������� ����
	sName = new char[len];
	strcpy(sName, Name);
};

Student::Student(const Student& rhs)
	: nHakbun(rhs.nHakbun)
{
	cout << "Student ��������� ȣ��" << endl;
	int len = strlen(rhs.sName) + 1;	// �������� ����
	sName = new char[len];
	strcpy(sName, rhs.sName);
}

Student::~Student()
{
	delete[]sName;
	cout << "Student �Ҹ��� ȣ��" << endl;
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