#include<iostream>

class m_string {
	friend ostream& operator<<(ostream& os, const m_string& ms) {
		os << ms._Myos
	}
};

using namespace std;

int main() {

}