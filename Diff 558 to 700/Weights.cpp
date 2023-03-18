#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z,w;
		cin>>w>>x>>y>>z;
        if(w==x || w==y || w==z)cout<<"YES"<<endl;
        else if(w==x+y || w==y+z || w==z+x)cout<<"YES"<<endl;
        else if(w==(x+y+z))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
		
	}
	return 0;
}