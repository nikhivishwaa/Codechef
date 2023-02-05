#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,p;
		cin>>x;
        x = x*50;
        p = x*0.2;
        p = (x*0.2) + p;
        p = (x*0.3) + p;
        p = x-p;
        cout<<p<<endl;
		
	}
	return 0;
}