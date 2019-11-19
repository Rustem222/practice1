#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double a;
	cin >> a;
	if (a > -10 && a < 10) {
		cout << a*5;
	}
	else {
		cout << a / 10;
	}
	return 0;
}