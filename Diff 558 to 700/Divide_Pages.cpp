#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y[100000], k=0;
		cin>>x;
		for(int i =0; i<x; i++){
            cin>>y[i];
            k += y[i];
        } 

    if(k%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
	}
	return 0;
}