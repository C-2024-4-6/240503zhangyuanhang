#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x=0, y=0, z=0,C=0;
	cout << "���������������߳�x,y,z" << endl;
	cin >> x >> y >> z;
	if ((x + y )<= z&&(x+z)<=y&&(y+z<=x)) {
		cout << "��������ı߳��޷�������߳�" << endl;
		
	}
	else {
		C = x + y + z;
		cout << "�������õ��������ܳ�Ϊ" << C << endl;
		if (x == y || y == z || x == z) {
			cout << "��������Ϊ����������" << endl;
		}

	}
	
}