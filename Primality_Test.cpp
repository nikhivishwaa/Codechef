#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,r=0;
		cin>>x;
		
        for(int i=1; i<=x; i++){
            if(x%i==0)r++;
        }
        if(r==2)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
	}
	return 0;
}