#include<iostream>
using namespace std;

void swap(double* a, double* b) {
	double c;
	c = *a;
	*a = *b;
	*b = c;
	

}

int main () {
	double a, b;
	cin >> a >> b;
	
	swap(&a,&b);
	cout<<a<<b;

	return 0;
}