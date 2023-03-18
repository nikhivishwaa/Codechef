#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
		cin>>x>>y>>z;
        if(x>=y && x>=z)cout<<x<<endl;
        else if(y>=x && y>=z)cout<<y<<endl;
        else if(z>=y && z>=x)cout<<z<<endl;
		
	}
	return 0;
}