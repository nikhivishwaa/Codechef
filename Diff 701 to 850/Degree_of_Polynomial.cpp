#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,r;
		cin>>x;
		int a[x];
        for(int i=0; i<x; i++){
            cin>>a[i];
            if(a[i]!=0)r=i;
        }
        cout<<r<<endl;
	}
	return 0;
}