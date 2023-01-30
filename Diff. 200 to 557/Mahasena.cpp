#include <iostream>
using namespace std;

int main() {

	int t,n[100],odd=0,even=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n[i];
        if(n[i]%2==0)even++;
        else if(n[i]%2==1)odd++;
	}
    if(odd<even)cout<<"READY FOR BATTLE"<<endl;
    else if(odd>=even)cout<<"NOT READY"<<endl;
	return 0;
}