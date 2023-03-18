#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
		cin>>x>>y>>z;
		if(((x*z)*10)<(y*z))cout<<((x*10)*z)<<endl;
        else cout<<(y*z)<<endl;
    }
	return 0;
}