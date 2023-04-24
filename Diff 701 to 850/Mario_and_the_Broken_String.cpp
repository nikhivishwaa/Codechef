#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,r=0;
		cin>>x;
        string s;
        cin>>s;
        int h = x/2;
        for(int i=0;i<h;i++){
            if(s[i]==s[i+h])r=1;
            else {r=0; break;}
        }
        if(r==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}