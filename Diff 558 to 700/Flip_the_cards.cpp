#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x, y;
		cin>>x>>y;
		if(x==y || y==0)cout<<0<<endl;
        else if((x-y)>y)cout<<y<<endl;
        else cout<<x-y<<endl;
	}
	return 0;
}