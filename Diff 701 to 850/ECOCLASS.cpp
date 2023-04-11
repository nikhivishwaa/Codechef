#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
	cin>>t;
	int n;
  int s[100];
  int d[100];
	while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>s[i];
    }
    for(int i=0;i<n;i++){
      cin>>d[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
      if(s[i]!=d[i]){
        count;
      }else{
          count++;
      }
    } 
    cout<<count<<endl;}
	return 0;
}
