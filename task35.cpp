#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a < 7) {
		cout <<"yes";
	}
	else if(a > 10) {
		cout <<"no";
	}
	else if (a == 9) {
		cout << "error";
	}
	return 0;
}