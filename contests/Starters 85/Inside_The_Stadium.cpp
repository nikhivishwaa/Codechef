#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n,c=0,i;
		cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int k =a[0];
        for(i=1;i<=n;i++){
            if((k*100)/i==100)c++;
            k +=a[i]; 
        }
        cout<<c<<endl;
		
	}
	return 0;
}