#include <iostream>
using namespace std;

int min(int x, int y, int z){
    if(x<=y && x<=z)return x;
    else if(y<=x && y<=z)return y;
    else if(z<=y && z<=x)return z;
}

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z,k;
		cin>>x>>y>>z;
		k = min(x,y,z);
        cout<<(x+y+z)-k<<endl;
	}
	return 0;
}