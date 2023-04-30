#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x;
		cin>>x;
        if(x%10>=0 && x%10<5)cout<<100-10*(x/10);
        else if (x%10>=5)cout<<100-(10+10*(x/10));
        cout<<endl;
	}
	return 0;
}