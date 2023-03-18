#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,h;
		cin>>h>>x>>y;
		if((h-y)<=0)cout<<1<<endl;
        else if((h-y)>0 && (h-y)%x>0)cout<<((h-y)/x)+2<<endl;
        else if((h-y)>0 && (h-y)%x==0)cout<<((h-y)/x)+1<<endl;
	}
	return 0;
}