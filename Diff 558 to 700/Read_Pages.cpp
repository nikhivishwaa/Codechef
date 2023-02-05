#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,n;
		cin>>n>>x>>y;
        if(n<=(x*y))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}