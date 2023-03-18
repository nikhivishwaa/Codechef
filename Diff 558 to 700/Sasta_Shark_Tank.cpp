#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
	int x,y;
	cin>>x>>y;
	if((x/10) == (y/20))cout<<"ANY"<<endl;
    else if((x/10) > (y/20))cout<<"FIRST"<<endl;
    else if((x/10) < (y/20))cout<<"SECOND"<<endl;

    }
	return 0;
}