#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	int count=0;
	cin>>a>>b>>c;
	if (a>0){
		count++;
	}
	if(b>0){
		count++;
	}
	if(c>0){
		count++;
	}
	cout<<"Count: "<<count;
	return 0;
	
}