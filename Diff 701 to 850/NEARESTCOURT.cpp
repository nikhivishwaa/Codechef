#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int x,y,z,p,q,r;
	   cin>>x>>y;
	   int a=max(x,y);
	   int b=min(x,y);
	   z=a-b;
	   p=z/2;
	   q=z%2;
	   r=p+q;
	   cout<<r<<endl;

	}
	return 0;
}


