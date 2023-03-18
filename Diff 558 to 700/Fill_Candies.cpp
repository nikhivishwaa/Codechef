#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
		cin>>n>>k>>m;
		if(n%(m*k)==0)cout<<n/(m*k)<<endl;
		else if(n%(m*k)>0)cout<<n/(m*k)+1<<endl;
    }
	return 0;
}