#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
		cin>>x>>y>>z;
        if((x+y+z)==180)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
		
	}
	return 0;
}