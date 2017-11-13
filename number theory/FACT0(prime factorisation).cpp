/*
using simple prime factorisation method
*/
#include <iostream>
#include<cmath>
using namespace std;
long long int prime_fact(long long int n)
{
	long long int count=0;
	if(n%2==0)
	{
		while(n%2==0)
		n/=2,count++;
	}
	if(count>0)
	cout<<"2^"<<count<<" ";
	count=0;
	for(int i=3;i<=sqrt(n);i++)
	{
		count = 0; 
		while(n%i==0)
		{
			n/=i;
			count++;
		}
		if(count>0)
		cout<<i<<"^"<<count<<" ";
	}
	if(n>1)
	cout<<n<<"^1 "<<endl;
}
int main() {
	long long int n;
	cin>>n;
	{
		while(n!=0)
		{
			prime_fact(n);
			cin>>n;
		}
	}
	// your code goes here
	return 0;
} 