#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int a, b, r, i=0;
		cin>>a>>b;
		r = a+b;
        for(int k=1; k<12; k++){
            if((r%k)==0)i++;
        }
        if(i>2)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
	}
	return 0;
}