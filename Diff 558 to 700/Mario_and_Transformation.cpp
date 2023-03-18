#include <iostream>
using namespace std;

void size(int x){
    if(x==0)cout<<"NORMAL"<<endl;
	else if(x==1)cout<<"HUGE"<<endl;
	else if(x==2)cout<<"SMALL"<<endl;
}

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x;
		cin>>x;
		if(x<3)size(x);
		else if(x>=3){
            if(x%3>=0)size(x%3);
        }
	}
	return 0;
}