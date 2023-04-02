#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
//#define int long long
#define pi 3.141597653
#define o 0
#define l 1
#define el endl
#define test int harrdy;cin>>harrdy;while(harrdy--)
#define loop(i,a,b) for(int i=a; i<b; i++)
#define JAYSHRIRAM ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(NULL);
using namespace std;

int main() {
	JAYSHRIRAM
	// your code goes here
	test{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int d=y/z;
	    if(y<=z){
	        cout<<l*x<<el;
	    }
	    else if(y%z==0){
	        cout<<d*x<<el;
	    }
	    else{
	    cout<<(x*d)+x<<el;
	    }
	}
return 0;
//Mr.Harrdy
}

