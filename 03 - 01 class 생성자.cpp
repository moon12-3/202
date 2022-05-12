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
	Student* stu = new Student[6];
	for (int i = 0; i < 6; i++)
		stu[i].show();

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