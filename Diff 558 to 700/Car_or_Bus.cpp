#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y;
		cin>>x>>y;
		if(y<x)cout<<"CAR"<<endl;
        else if(y==x)cout<<"SAME"<<endl;
        else if(y>x)cout<<"BIKE"<<endl;
	}
	return 0;
}