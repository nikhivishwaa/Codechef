#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x;
		cin>>x;
        int a[100000], b[100000];
        for(int i=0; i<x; i++){
            cin>>a[i];
        }
        for(int j=0; j<x; j++){
            cin>>b[j];
        }
		int r=0;
        for(int k=0; k<x; k++){
            if(a[k]>=b[k]){
                if(a[k]<=(2*b[k]))r++;
            }
            else if(a[k]<=b[k]){
                if(b[k]<=(2*a[k]))r++;
            }
        }
        cout<<r<<endl;
	}
	return 0;
}