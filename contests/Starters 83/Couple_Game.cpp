#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int g,b;
		cin>>g>>b;
		if(g>=b)cout<<0<<endl;
        else cout<<b-g<<endl;
	}
	return 0;
}