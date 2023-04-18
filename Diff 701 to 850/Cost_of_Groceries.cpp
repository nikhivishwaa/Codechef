#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n,x,i,r=0;
		cin>>n>>x;
		int A[n], B[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i<n;i++){
        cin>>B[i];
        if(A[i]>=x)r+=B[i];
    }
    cout<<r<<endl;
    }
	return 0;
}