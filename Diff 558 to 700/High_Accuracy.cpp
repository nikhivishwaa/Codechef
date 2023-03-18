#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x;
		cin>>x;
        if((x%3)==1)cout<<(x%3)+1<<endl;
        else if((x%3)==2)cout<<(x%3)-1<<endl;
		else if((x%3)==0)cout<<0<<endl;
	}
	return 0;
}