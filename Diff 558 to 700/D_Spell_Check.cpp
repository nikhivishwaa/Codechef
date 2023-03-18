#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,n=0,o=0,p=0,q=0,k=0,r=0,y=0;
		cin>>x;
        char s[11];
        cin>>s;
        for(int i=0;i<x;i++){
            if(strlen(s)==5){
                if(s[i]=='T')n=1;
                else if(s[i]=='i')o=1;
                else if(s[i]=='m')p=1;
                else if(s[i]=='u')q=1;
                else if(s[i]=='r')r=1;
            }
            if((n+o+p+q+r)==5)y=1;
            else if((n+o+p+q+r)!=5)k=2;
        }
        if(y==1)cout<<"YES"<<endl;
        else if(k==2)cout<<"NO"<<endl;
		
	}
	return 0;
}