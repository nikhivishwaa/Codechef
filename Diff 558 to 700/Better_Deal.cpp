#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
		cin>>x>>y;
		
        a = ((100*x)/100);
        b = ((200*y)/100);

        if(100-a>200-b)cout<<"SECOND"<<endl;
		else if(100-a<200-b)cout<<"FIRST"<<endl;
		else if(100-a==200-b)cout<<"BOTH"<<endl;
	}
	return 0;
}