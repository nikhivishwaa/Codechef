#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n,k;
		cin>>n>>x;
        k = n*x;
        if((k%4)==0)cout<<k/4<<endl;
        else cout<<(k/4) + 1<<endl;
		
	}
	return 0;
}