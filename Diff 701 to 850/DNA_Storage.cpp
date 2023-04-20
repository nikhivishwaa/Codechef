#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, k=0;
	    string s, s2="";
	    cin>>n>>s;
	    
	    for (char i: s) {
	        s2 += i;
	        k++;
	        if (k==2) {
	            if (s2 == "00") cout<<"A";
	            if (s2 == "01") cout<<"T";
	            if (s2 == "10") cout<<"C";
	            if (s2 == "11") cout<<"G";
	            s2 = "";
	            k = 0;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
