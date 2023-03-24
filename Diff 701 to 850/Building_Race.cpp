#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    double a,b,y,x;
		cin>>a>>b>>x>>y;
		if((a/x)==(b/y))cout<<"Both"<<endl;
		else if((a/x)<(b/y))cout<<"Chef"<<endl;
		else if((a/x)>(b/y))cout<<"Chefina"<<endl;
	}
	return 0;
}