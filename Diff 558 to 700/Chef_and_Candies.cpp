#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n;
		cin>>n>>x;
		if(n>x){
            if((n-x)%4==0)cout<<(n-x)/4<<endl;
            else if((n-x)%4>0)cout<<((n-x)/4) + 1<<endl;
        }
        else if(n<=x)cout<<0<<endl;
	}
	return 0;
}