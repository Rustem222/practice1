#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double a;
	cin >> a;
	if (a < -100 && a > 100) {
		cout << a*0;
	}
	else {
		cout << a + 1;
	}
	return 0;
}