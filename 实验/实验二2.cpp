#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	cout << "�������xΪ��" << x << endl;
	if (x < 1&& x > 0) {
		y = 3 - x*2;
	}
	else if (x>=1&& x < 5) {
		y = 2 / (4 * x) + 1;
	}
	else if (x>=5 && x < 10) {
		y = x * x;
	}
	cout << "�������õ�yΪ" << y << endl;

	return 0;

}