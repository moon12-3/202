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
	Student() {
		iStuNum = 1234;
		strName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	void show(void) {
		cout << "�й��� " << iStuNum << "�Դϴ�." << endl;
		cout << "�̸��� " << strName << "�Դϴ�." << endl <<endl;
	}
};

int main() {
	Student stu1;
	Student stu2;

	stu1.show();
	stu2.show();

	return 0;
}