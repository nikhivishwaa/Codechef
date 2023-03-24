#include <iostream>
using namespace std;

void second_max(int a, int b, int c){
    if(a>b && a<c || a<b && a>c)cout<<a<<endl;
    else if(b>a && b<c || b<a && b>c)cout<<b<<endl;
    else if(c>a && c<b || c<a && c>b)cout<<c<<endl;
}

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z,r;
		cin>>x>>y>>z;
		second_max(x,y,z);
	}
	return 0;
}