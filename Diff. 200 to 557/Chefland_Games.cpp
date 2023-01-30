#include <iostream>
using namespace std;

int main() {

	int t,in=0,out=0,r[4];
	cin>>t;
	while(t--){
        for(int i=0;i<4;i++){
            cin>>r[i];
            if(r[i]==0)in++;
            else if(r[i]==1)out++;
        }
        if(in==4 && out<1)cout<<"IN"<<endl;
		else if(in<4 && out>0)cout<<"OUT"<<endl;
        in = 0;
        out = 0;
	}
	return 0;
}