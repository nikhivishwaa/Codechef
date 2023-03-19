#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,k=0;
		cin>>x;
        int w[x];
        for(int i=0; i<x; i++){
            cin>>w[i];
            if(w[i]<=60 && w[i]>=10)k++;
        }
		cout<<k<<endl;
	}
	return 0;
}