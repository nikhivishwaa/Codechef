#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x;
		cin>>x;
		if(x>50)cout<<"RIGHT"<<endl;
        else if(x<=50)cout<<"LEFT"<<endl;
	}
	return 0;
}