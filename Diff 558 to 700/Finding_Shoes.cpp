#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int m,n;
		cin>>n>>m;
		if(m>=n)cout<<n<<endl;
        else if(m<n)cout<<n + (n-m)<<endl;
	}
	return 0;
}