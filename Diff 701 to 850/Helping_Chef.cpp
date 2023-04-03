#include <iostream>
using namespace std;

int main() {
    int tc;cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        if(n<10){
            cout<< "Thanks for helping Chef!"<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
	return 0;
}
