/*
resources : 
algorithm : https://www.topcoder.com/community/data-science/data-science-tutorials/primality-testing-non-deterministic-algorithms/
why primalty: https://math.stackexchange.com/questions/1733096/primality-testing-vs-sieve
time complexity O(logn)
*/
#include <iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
long long int mulmod(long long int a,long long int b,long long int p)
{
	long long int x=0;
	a%=p;b%=p;
	while(b>0)
	{
		if(b%2!=0)
		x = (x+a)%p;
		a = (a+a)%p;
		b/=2;
	}
	return x%p;
}
long long int power(long long int a,long long int b,long long int p)
{
	long long int x=1;
	a%=p;b%=p;
	while(b>0)
	{
		if(b%2!=0)
		x = mulmod(x,a,p);
		a = mulmod(a,a,p);
		b/=2;
	}
	return x%p;
}
bool fermat(long long int p,long long int it)
{
	long long int a,ans;
	if(p==1)
	return false;
	else if(p==2)
	return true;
	else
	{
		for(int i=0;i<it;i++)
		{
			a = (rand()%p-1)+1;
			ans = power(a,p-1,p);
			if(ans!=1)
			return false;
		}
	}
	return true;
}
int main() {
	long long int t;
	cin>>t;
	int arr[1001];
	memset(arr,0,sizeof(arr));
    //test if n is divisible by first 1000 primes to improve the probabality of determining if num is prime or not
	for(int i=2;i<sqrt(1000);i++)
	{
		if(arr[i]==0)
		for(int j=2*i;j<=1000;j+=i)
		arr[j]=1;
	}
	while(t--)
	{
		long long int n;
		bool ans;
		cin>>n;
		ans = fermat(n,18);
		if(ans==false)
		for(int i=2;i<1001;i++)
		if(arr[i]==0)
		if(n%i==0)
		{
			ans=false;
			break;
		}
		if(ans==false)	
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	// your code goes here
	return 0;
} 