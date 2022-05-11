#include<iostream>
#include<string>

using namespace std;

class Student {
private :
	int iStuNum;
	string strName;

	// 생성자 : 객체가 생성될 때 호출되는 함수. 반환형을 쓰지 않는다.
	// 디폴트 생성자를 컴파일러가 만들어준다.
public :
	Student();
	Student(int, string);

	void show(void);
	
};

int main() {
	Student stu1;
	Student stu2(1111, "moon");

	stu1.show();
	stu2.show();

	return 0;
}

Student::Student() {
	iStuNum = 1234;
	strName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int iStuNum, string strName) {
	this->iStuNum = iStuNum;
	this->strName = strName;
	cout << "학번이 등록되었습니다." << endl;

}

void Student::show(void) {
	cout << "학번은 " << iStuNum << "입니다." << endl;
	cout << "이름은 " << strName << "입니다." << endl << endl;
}