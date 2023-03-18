#include <iostream>
using namespace std;

int min(int a, int b){
    int min;
    if(a<=b)min = a;
    else if(b<a)min = b;
    return min;
}

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x, y, a, b, m, r[12000][2], i, s[12000][2];
        int product, gcd = 1;

        r[0][0]=1;  r[0][1]=1; 
        s[0][0]=1;  s[0][1]=1; 

        cin>>x>>y;
        a=x;b=y;
        for(i=1; i<=12000; i++){
            r[i][1]=0;
            s[i][1]=0;
        }

        for(i=1; i<=a; i++){
            r[i][0]=i+1;

            if((x%(i+1))==0){
                    do {
                        x = x/(i+1);
                        r[i][1]++;
                    } while((x%(i+1))==0);
            }
        }

        for(int i=1; i<=b; i++){

            s[i][0]=i+1;

            if((y%(i+1))==0){
                    do{
                        y = y/(i+1);
                        s[i][1]++;
                    } while((y%(i+1))==0);

            }
        }
    m = min(a, b);
    for (int j = 0; j <= m; j++)
    {
        if(r[j][0]==s[j][0]){
            if((r[j][1]>0) && (s[j][1]>0)){
                product = min(r[j][1], s[j][1]);
                for (int c = 0; c < product; c++)
                {
                    gcd = gcd*(j+1);
                }
            }
        }
    }

    long long lcm = (a*b)/gcd;
    cout<<gcd<<" "<<lcm<<endl;

	}
	return 0;
}