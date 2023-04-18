#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,m,d;
		cin>>x>>m>>d;
        int a = x*m;
        int b = x+d; 
		cout<<min(a,b)<<endl;
	}
	return 0;
}