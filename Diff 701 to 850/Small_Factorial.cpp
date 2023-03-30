#include <iostream>
using namespace std;

int factorial(int x){
    if(x==0 || x==1)return 1;
    else return x*factorial(x-1);
}

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
        int k = factorial(n);
        cout<<k<<endl; 
    }
	return 0;
}