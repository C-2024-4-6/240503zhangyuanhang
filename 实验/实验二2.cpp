#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	cout << "您输入的x为：" << x << endl;
	if (x < 1&& x > 0) {
		y = 3 - x*2;
	}
	else if (x>=1&& x < 5) {
		y = 2 / (4 * x) + 1;
	}
	else if (x>=5 && x < 10) {
		y = x * x;
	}
	cout << "计算所得的y为" << y << endl;

	return 0;

}