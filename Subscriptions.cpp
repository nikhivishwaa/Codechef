#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n;
		cin>>n>>x;
        if(n>=6){
            int c = float(n/6);
            // cout<<n<<endl;
            if((n%6)!=0)cout<<(x*c) + x<<endl;
            else cout<<x*c<<endl;
        }
        else cout<<x<<endl;
	}
	return 0;
}