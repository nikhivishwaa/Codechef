#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n,x[5000],k=0;
		cin>>n;
        for(int i=0;i<n;i++)cin>>x[i];
        for(int j=0;j<n;j++){
            if(x[j]>=1000)k++;
        }
		cout<<k<<endl;
	}
	return 0;
}