#include<bits/stdc++.h>
#include<iostream>
using namespace std;
     int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(0);
     int t;
     cin>>t;
     while(t--){
         int n,x;cin>>n>>x;int cnt=0;
         int a[n];
         for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=x)cnt++;
         }
         cout<<cnt<<"\n";
}
return 0;
}