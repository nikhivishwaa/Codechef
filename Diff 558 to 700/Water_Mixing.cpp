#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
		cin>>a>>b>>x>>y;
        if((b-a)>=0 && x>=0 && (b-a)<=x)cout<<"YES"<<endl;
        else if((b-a)>=0 && x>=0 && (b-a)>x)cout<<"NO"<<endl;
        else if((b-a)<=0 && y>=0 && abs(b-a)>y)cout<<"NO"<<endl;
        else if((b-a)<=0 && y>=0 && abs(b-a)<=y)cout<<"YES"<<endl;
		
	}
	return 0;
}