  
#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if (a<5&&b<5&&c>5){
		cout<<"Yes";
	}
	else if (a<5&&c<5&&b>5){
		cout<<"Yes";
	}
	else if (b<5&&c<5&&a>5){
		cout<<"Yes";
	}
	else cout<<"No";
	return 0;
	
}