#include <iostream>
using namespace std;

int main() {

	int t,i;
	cin>>t;
	while(t--){
	    int n,k=0,a=0;
		cin>>n;
		int A[n];
        for(i=0;i<n;i++){
            cin>>A[i];
            if(n%2==0){
                if(A[i]>0)k++;
                else a++;
            }
        }
        if(n%2!=0)cout<<-1<<endl;
        else if(k>a)cout<<k-n/2<<endl;
        else cout<<a-n/2<<endl;
    }
	return 0;
}