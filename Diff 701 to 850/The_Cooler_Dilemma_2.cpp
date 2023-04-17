#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,r=0;
		cin>>x>>y;
        r = (y-1)/x;
        cout<<r<<endl;
	}
	return 0;
}