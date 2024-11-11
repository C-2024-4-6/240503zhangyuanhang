#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x=0, y=0, z=0,C=0;
	cout << "请输入三角形三边长x,y,z" << endl;
	cin >> x >> y >> z;
	if ((x + y )<= z&&(x+z)<=y&&(y+z<=x)) {
		cout << "您所输入的边长无法组成三边长" << endl;
		
	}
	else {
		C = x + y + z;
		cout << "计算所得的三角形周长为" << C << endl;
		if (x == y || y == z || x == z) {
			cout << "此三角形为等腰三角形" << endl;
		}

	}
	
}