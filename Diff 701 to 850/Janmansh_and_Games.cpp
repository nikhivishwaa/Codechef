#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--)
	{
	  int a,b;
	  cin >> a >> b;
	  
	  int x = abs(a-b);
	  
	  if(x%2==0)  cout << "Janmansh" << endl;
	  else    cout << "Jay" << endl;
	}
	return 0;
}
