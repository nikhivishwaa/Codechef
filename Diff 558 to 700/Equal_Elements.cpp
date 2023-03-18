#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,k=0;
		cin>>x;
		int a[200000];
        for(int i=0; i<x; i++){
            cin>>a[i];
        }
        for(int j=0; j<(x-1); j++){
            if(a[j]==a[j+1])continue;
            if(a[j]!=a[j+1]){
                a[j]=a[j+1];
                k++;
            }
        }
        cout<<k<<endl;
	}
	return 0;
}