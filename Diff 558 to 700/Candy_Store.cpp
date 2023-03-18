#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y;
		cin>>x>>y;
		if(y>=x)cout<<(2*(y-x))+x<<endl;
        else if(x>y)cout<<y<<endl;
	}
	return 0;
}