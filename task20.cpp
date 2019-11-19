#include<iostream>
using namespace std;

int main () {
	double a,b,c,S,P;
	cin >> a>>b;
	c = sqrt(a*a+b*b);
	S = (a * b) / 2;
	P = a + b + c;
	cout << c << S << P;

	return 0;
}