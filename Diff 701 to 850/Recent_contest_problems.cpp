#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,k,l=k=0;
		cin>>x;
		string s[x];
        for(int i=0;i<x;i++){
            cin>>s[i];
            if(s[i]=="LTIME108")k++;
            else if(s[i]=="START38")l++;
        }
        cout<<l<<" "<<k<<endl;
	}
	return 0;
}