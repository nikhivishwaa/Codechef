#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    long long x;
		int tmp, count=0;
        cin>>x;
		while(x>1){
            tmp = x%10;
            x = x/10;
            if(tmp==7)count++;
        }        

        if(count>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

	}
	return 0;
}