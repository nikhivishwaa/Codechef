#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n,e;
		cin>>n>>x;
        e = pow(2,x);
		for(int i =0; i<n; i++){
            e = e-(e/2);
        }
        cout<<e<<endl;
    }
	return 0;
}