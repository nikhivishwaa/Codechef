#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,p[2],q[2];
            cin>>p[0]>>p[1];
            cin>>q[0]>>q[1];
        
        if(p[0]>=p[1])x=p[0];
        else x=p[1];

        if(q[0]>=q[1])y=q[0];
        else y=q[1];

        cout<<x+y<<endl;
    }
	return 0;
}