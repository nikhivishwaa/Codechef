#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,m;
		cin>>x>>y>>m;
        if(y<=(m*x))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
	}
	return 0;
}