#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n;
		cin>>n>>x;
		if(x%n==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}