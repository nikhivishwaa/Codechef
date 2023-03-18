#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
        int x;
		cin>>x;
	    string s;
        cin>>s;
        for(int i = 0; i<x; i++){
            if(s[i]=='T')s[i] = 'A';
            else if(s[i]=='A')s[i] = 'T';
            else if(s[i]=='C')s[i] = 'G';
            else if(s[i]=='G')s[i] = 'C';
        }
		cout<<s<<endl;
	}
	return 0;
}