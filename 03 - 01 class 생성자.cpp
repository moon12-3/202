#include<iostream>
#include<string>

using namespace std;

class Student {
private :
	int iStuNum;
	string strName;

	// ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�. ��ȯ���� ���� �ʴ´�.
	// ����Ʈ �����ڸ� �����Ϸ��� ������ش�.
public :
	Student();
	Student(int, string);

	void show(void);
	
};

int main() {
	Student* str1 = new Student();
	str1->show();

	Student* str1 = new Student(1111, "moon");
	stu2->show();

	delete Student stu1;
	delete Student stu2;

	return 0;
}

Student::Student() {
	iStuNum = 1234;
	strName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int StuNum, string sname)
// ��ü ���� ���ÿ� ��� ���� �ʱ�ȭ	// �������(�Ű�����)
// const�� ������ ��������� ����� �� �ִ�.
	: iStuNum(StuNum), strName(sname) 
{
	
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}

void Student::show(void) {
	cout << "�й��� " << iStuNum << "�Դϴ�." << endl;
	cout << "�̸��� " << strName << "�Դϴ�." << endl << endl;
}