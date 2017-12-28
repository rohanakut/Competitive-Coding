#include <iostream>
using namespace std;
 
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n%2==0)
		{
			cout<<(n*(n+2)*(2*n+1))/8<<endl;
		}
		else
		cout<<(n*(n+2)*(2*n+1)-1)/8<<endl;
	}
	// your code here
 
	return 0;
} 