#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
		cin>>a>>b>>c;
        if(a>b && a>c){
            if(b>c)cout<<b<<endl;
            else if(b<c)cout<<c<<endl;
        }
		else if(a<b && b>c){
            if(a>c)cout<<a<<endl;
            else if(a<c)cout<<c<<endl;
        }
		else if(c>b && a<c){
            if(b>a)cout<<b<<endl;
            else if(b<a)cout<<a<<endl;
        }
		
	}
	return 0;
}