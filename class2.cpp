#include<iostream>

using namespace std;

class CBox {
private :	// private에서 protected(또는 public)으로 변경하기
	double width;
public :
	void setWidth1(double a) {
		width = a;
	}
};

class ChildBox : CBox {	// 아무것도 적혀있지 않을 시 public CBox와 같다!
public :
	void setWidth(double w){
		setWidth1(w);
	}
};