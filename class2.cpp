#include<iostream>

using namespace std;

class CBox {
private :	// private���� protected(�Ǵ� public)���� �����ϱ�
	double width;
public :
	void setWidth1(double a) {
		width = a;
	}
};

class ChildBox : CBox {	// �ƹ��͵� �������� ���� �� public CBox�� ����!
public :
	void setWidth(double w){
		setWidth1(w);
	}
};