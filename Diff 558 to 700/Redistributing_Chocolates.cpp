#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
		cin>>x>>y>>z;
        if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
            if(x==y && y==z && z==x && x>=1 && y>=1 && x>=1){
                x-=1;
                z+=1;
                if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                }
            else if(x==y && y==z && z!=x){
                x-=1;
                y+=1;
                if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                }    
            else if(x==y && y!=z && z==x){
                x-=1;
                z+=1;
                if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                }
            else if(x!=y && y==z && z==x){
                y-=1;
                z+=1;
                if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                }
            else if(x==y && y!=z && z!=x){
                x-=1;
                y+=1;
                if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                }
            else if(x!=y && y==z && z!=x){
                y-=1;
                z+=1;
                if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                }  
            else if(x!=y && y!=z && z==x){
                x-=1;
                z+=1;
                if(x!=y && x!=z && y!=z && x>=1 && y>=1 && x>=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                }  

	}
	return 0;
}