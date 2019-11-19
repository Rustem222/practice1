#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double y,a,k,ch;
	cout << "price for 1 kg ";
	cin >> a;
	cout << "ch 1.price 2.amount";
	cin >> ch;
	if (ch = 1) {
		cout << "amount: ";
		cin >> y;
		cout << y * a;
	}
	else {
		cout << "price: ";
		cin >> k;
		cout << "amount: ";
		cin >> y;
		cout << k / y;
	}
	
	return 0;
}