#include <iostream>
#include<cstdio>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,k=0;
		cin>>x;
        char r[10],p[10];
        gets(r);
        for(int m=0;m<x;m++)p[m] = r[m];
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(r[i]!=p[j]){
                    k++;
                }
            }                    
            if(k==x)k=0;
            else if(k<x)break; }       
		if(k==0)cout<<"-1"<<endl;
		else if(k<1)cout<<abs(x-k)<<endl;

	}
	return 0;
}