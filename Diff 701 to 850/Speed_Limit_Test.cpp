#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
        float c1, c2;
		cin>>a>>x>>b>>y;
        c1 = float(a)/x;
        c2 = float(b)/y;
        if(c1==c2)cout<<"Equal"<<endl;
        else if(c1>c2)cout<<"Alice"<<endl;
        else if(c1<c2)cout<<"Bob"<<endl;
	}
	return 0;
}