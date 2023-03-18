#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n, x, k;
		cin>>n>>x>>k;
		if(k<(n*x))cout<<k/x<<endl;
        else if(k>(n*x))cout<<n<<endl;
	}
	return 0;
}