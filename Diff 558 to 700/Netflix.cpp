#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,a,b,c;
		cin>>a>>b>>c>>x;
		if((a+b)>=x || (b+c)>=x || (c+a)>=x)cout<<"YES"<<endl;
		else if((a+b)!=x || (b+c)!=x || (c+a)!=x)cout<<"NO"<<endl;
	}
	return 0;
}