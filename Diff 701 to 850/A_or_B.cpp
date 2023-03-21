#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,a=500, b=1000,k,l;
		cin>>x>>y;
        k=(a-(2*x))+(b-(4*(y+x)));
        l=(b-(4*y))+(a-(2*(y+x)));
		if(k>=l)cout<<k<<endl;
        else if(k<l)cout<<l<<endl;
	}
	return 0;
}