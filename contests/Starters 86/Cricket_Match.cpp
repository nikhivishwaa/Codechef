#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n,m;
		cin>>n>>m;
		if(n<=(m*36))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}