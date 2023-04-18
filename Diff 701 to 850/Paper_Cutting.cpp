#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n;
		cin>>x>>n;
        int a = x*x;
        int b = n*n;
		if(x%n==0)cout<<a/b<<endl;
        else cout<<pow((x-(x%n)),2)/b<<endl; 
    }
	return 0;
}