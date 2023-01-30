#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
		cin>>x>>y>>z;
        if((x%2)==1 && (y%2)==1 && (z%2)==1)cout<<"NO"<<endl;
        else if((x%2)==1 || (y%2)==1 || (z%2)==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}