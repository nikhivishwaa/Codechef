#include <bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
using namespace std;

int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--) {
	    int a,b,c;
	    cin>>a>>b>>c;
	    int d= min({a,b,c});
	    if(d==a) cout<<"Draw"<<endl;
	    if(d==b)cout<<"Bob"<<endl;
	    if(d==c) cout<<"Alice"<<endl;
	    
	}
	return 0;
}
