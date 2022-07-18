#include <iostream>

using namespace std;

class m_string {
private:
	char* _Myptr;
	int _Mysize;
	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}
public:
	m_string() {
		_Myptr = NULL;
		_Mysize = 0;
	}

	m_string(const char* str) {
		_Mysize = strlen(str);
		_Myptr = new char[_Mysize + 1];
		strcpy(_Myptr, str);
	}

	m_string(const m_string& rhs) {
		_Mysize = rhs._Mysize;
		_Myptr = new char[_Mysize + 1];
		strcpy(_Myptr, rhs._Myptr);
	}

	m_string& operator=(const char* rhs) {
		delete[] _Myptr;
		_Mysize = strlen(rhs);
		_Myptr = new char[_Mysize + 1];
		strcpy(_Myptr, rhs);

		return *this;
	}

	m_string& operator=(const m_string& rhs) {
		delete[] _Myptr;
		_Mysize = rhs._Mysize;
		_Myptr = new char[_Mysize + 1];
		_Myptr = strcpy(_Myptr, rhs._Myptr);

		return *this;
	}

	m_string operator+(const m_string& rhs) {
		m_string str;
		str._Mysize = _Mysize + rhs._Mysize;
		str._Myptr = new char[str._Mysize + 1];

		strcpy(str._Myptr, _Myptr);
		strcat(str._Myptr, rhs._Myptr);
		return str;
	}

	m_string operator+(const char* rhs) {
		m_string str;
		str._Mysize = _Mysize + strlen(rhs);
		str._Myptr = new char[str._Mysize + 1];

		strcpy(str._Myptr, _Myptr);
		strcat(str._Myptr, rhs);
		return str;
	}

	// 문자열에 대한 비교 연산자
	int operator==(const char* rhs) {
		return strcmp(_Myptr, rhs);
	}

	// my_string에 대한 비교 연산자
	int operator==(const m_string& rhs) {
		return strcmp(_Myptr, rhs._Myptr);
	}

	int size() const {
		return _Mysize;
	}
	int length() const {
		return _Mysize;
	}
	char* c_str() const {
		return _Myptr;
	}

	~m_string() {
		delete[] _Myptr;
	}
};


int main(void)
{

	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}
