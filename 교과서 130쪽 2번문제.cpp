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
		name = "감자";
		account = "12-345";
		balance = 300000000;
		print(bal);
	}
	void print(int bal) {
		cout << name << "님의 계좌에 " << bal <<"원이 입금되었습니다." <<endl;
	}
};

int main() {
	CBank c1 = CBank(3000);
	return 0;
}