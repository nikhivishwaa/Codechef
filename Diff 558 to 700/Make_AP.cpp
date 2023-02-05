#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int a,b,c;
	cin>>a>>c;
    b = (a+c)/2;
    if((b-a)==(c-b))cout<<b<<endl;
    else if((b-a)!=(c-b))cout<<"-1"<<endl;
    
    }
    return 0;
}