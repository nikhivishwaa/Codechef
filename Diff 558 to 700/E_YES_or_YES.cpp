#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n=0,q=0,k=0,r=0,y=0;
        char s[4];
        cin>>s;
        for(int i=0;i<3;i++){
            if(strlen(s)==3){
                if(s[i]=='Y')n=1;
                else if(s[i]=='y')n=1;
                else if(s[i]=='e')q=1;
                else if(s[i]=='E')q=1;
                else if(s[i]=='s')r=1;
                else if(s[i]=='S')r=1;
            }
            if((n+q+r)==3)y=1;
            else if((n+q+r)!=3)k=2;
        }
        if(y==1)cout<<"YES"<<endl;
        else if(k==2)cout<<"NO"<<endl;
		
	}
	return 0;
}