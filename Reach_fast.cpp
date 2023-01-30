#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,k,f;
		cin>>x>>y>>k;
        f = (abs(y-x));
		if((f%k)==0)cout<<f/k<<endl;
        else cout<<(f/k) + 1<<endl;
	}
	return 0;
}