#include<iostream>
#include <string>

using namespace std;

class CBank {
private :
	string name;
	string account;
	int balance;
public :
	CBank(int bal) {
		balance += bal;
		name = "����";
		account = "12-345";
		balance = 300000000;
		print(bal);
	}
	void print(int bal) {
		cout << name << "���� ���¿� " << bal <<"���� �ԱݵǾ����ϴ�." <<endl;
	}
};

int main() {
	CBank c1 = CBank(3000);
	return 0;
}