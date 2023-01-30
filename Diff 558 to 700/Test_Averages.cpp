#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
		cin>>x>>y>>z;
        if(((x+y)/2)<35 || ((z+y)/2)<35 || ((x+z)/2)<35)cout<<"Fail"<<endl;
        else cout<<"Pass"<<endl;
		
	}
	return 0;
}