#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
        int x[4];
		cin>>x[0]>>x[1]>>x[2]>>x[3];
	    
        
        if(x[0]==x[2] || x[1]==x[3] || x[1]==x[3] && x[0]==x[2])cout<<2<<endl;
        else if(x[1]!=x[3] && x[0]!=x[2])cout<<1<<endl;
	}
	return 0;
}