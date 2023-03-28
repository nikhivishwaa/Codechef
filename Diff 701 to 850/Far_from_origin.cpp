#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    double x1,x2,y1,y2,a,b;
		cin>>x1>>y1>>x2>>y2;
		a = pow((x1-0),2)+pow((y1-0),2);
		b = pow((x2-0),2)+pow((y2-0),2);
        a = sqrt(a);
        b = sqrt(b);
        if(a>b)cout<<"ALEX"<<endl;
        else if(a<b)cout<<"BOB"<<endl;
        else cout<<"EQUAL"<<endl;
	}
	return 0;
}