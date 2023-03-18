#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	if(x==1 || x==0)cout<<0<<endl;
    else if(x==2)cout<<1<<endl;
    else if(x>2)cout<<x-1<<endl;
	return 0;
}