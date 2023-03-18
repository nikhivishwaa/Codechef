#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x;
		cin>>x;
		if(x>=80)cout<<"YES"<<endl;
        else if(x<80)cout<<"NO"<<endl;
	}
	return 0;
}