#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
	int x;
	cin>>x;
	if((x%4) == 0)cout<<"Good"<<endl;
    else if((x%4)>0)cout<<"Not Good"<<endl;

    }
	return 0;
}