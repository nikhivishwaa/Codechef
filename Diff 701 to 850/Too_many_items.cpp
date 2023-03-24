#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int a;
		cin>>a;
		if(a%10==0)cout<<a/10<<endl;
		else if((a%10)>0)cout<<(a/10)+1<<endl;
	}
	return 0;
}