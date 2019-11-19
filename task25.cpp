#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double week, month, year;
	cin >> week >> month >> year;
	cout << week * 7 + month * 30 + year * 360;
	return 0;
}
