#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y;
		cin>>x>>y;
        if((x+y)%4==0)cout<<"Alice"<<endl;
        else if((x+y)%4==1)cout<<"Alice"<<endl;
        else if((x+y)%4==2)cout<<"Bob"<<endl;
        else if((x+y)%4==3)cout<<"Bob"<<endl;
		
	}
	return 0;
}