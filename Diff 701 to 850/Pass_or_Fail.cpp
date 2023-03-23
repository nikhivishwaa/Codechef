#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n,p,r=0;
		cin>>n>>x>>p;
        r = (x*3)-(n-x);
		if(r>=p)cout<<"PASS"<<endl;
		else cout<<"FAIL"<<endl;
	}
	return 0;
}