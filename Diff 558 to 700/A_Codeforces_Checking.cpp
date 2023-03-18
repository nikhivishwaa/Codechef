#include <iostream>
#include<cstdio>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    char x, c[11] = "codeforces";
        int r=0,k=0;
		cin>>x;
        for(int i=0;i<11;i++){
            if(c[i]==x)r=1;
            else if(c[i]!=x)k=2;
        }
        if(r==1)cout<<"YES"<<endl;
        else if(k==2)cout<<"NO"<<endl;
		
	}
	return 0;
}