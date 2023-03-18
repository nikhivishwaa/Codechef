#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n,y;
		cin>>n>>x>>y;
		if((x*n)==y || ((x-1)*n)==y || (n*0)==y)cout<<"YES"<<endl;
        else if((y%x)==0 && (y%n)==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}