#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b,c,d;
		cin>>a>>b>>c>>d;
        x = abs(a-c);
        y = abs(b-d);
        if(x>=y)cout<<x<<endl;
        else if(x<y)cout<<y<<endl;
		
	}
	return 0;
}