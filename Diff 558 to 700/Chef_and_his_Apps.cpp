#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z,s, w;
		cin>>s>>x>>y>>z;
		w = abs(s-x-y);
        if(w>=z)cout<<0<<endl;
        else if(w<z && (z<=w+x || z<=w+y))cout<<1<<endl;
        else if(w<z && z<=w+x+y)cout<<2<<endl;
        
		
	}
	return 0;
}