#include <iostream>
using namespace std;

int min(int a, int b){
    if(a>=b)return b;
    else return a;
}

int main(){

	int t;
	cin>>t;
	while(t--){
	    int x,r,k=0;
		cin>>x;
        int n[x];
        for(int i=0;i<x;i++){
            cin>>n[i];  
        }
        r = n[0];
        for(int s=0;s<x;s++){
            if(s>0){
                r = min(r,n[s]);
            }
        }
        for(int j=0;j<x;j++){
            if(n[j]!=r){
                n[j]=r;
                k++;
            }
        }	
        cout<<k<<endl;
	}
	return 0;
}