#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b,k=2;
		cin>>x>>y>>a>>b;
		if(x==a||x==b)k--;
        if(y==a||y==b)k--;
        cout<<k<<endl;
	}
	return 0;
}