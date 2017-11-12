#include <iostream>
#include<cmath>
using namespace std;
void totient(long long int n)
{
	double p=n;int count;
	for(int i=2;i<=sqrt(n);i++)
	{count=0;
		while(n%i==0)
		{
			n/=i;
			count++;
		}
		/*if(count>1)
		p*=pow(i,count)-pow(i,count-1);
		else if(count==1)*/
		if(count>0)
		p*=(1.0-(1.0/(float)i));
	}
	if(n>1)
	{
		p*=(1.0-(1.0/(float)n));
	}
	cout<<(int)p<<endl;
}
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int num;
		cin>>num;
		totient(num);
	}
	
	// your code here
 
	return 0;
} 