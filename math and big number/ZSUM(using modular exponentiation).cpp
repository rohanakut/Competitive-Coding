#include <iostream>
#define mod  10000007
using namespace std;
long long int mulmod(int a,int b)
{
	int res=0;
	a = a%mod;
	b = b%mod;
	while(b>0)
	{
		if(b%2!=0)
		res = (res+a)%mod;
		a = (a+a)%mod;
		b/=2;
	}
	return res%mod; 
}
long long int power(int a,int b)
{
	int res=1;
	while(b>0)
	{
		if(b%2!=0)
		res = mulmod(res,a);
		a = mulmod(a,a);
		b/=2;
	}
	return res%mod;
}
int main() {
	long long int n,k;
	cin>>n>>k;
	while(n>0&&k>0)
	{
		int final=0,ans=0,res=0;
		ans = power(n-1,k);
		ans = mulmod(ans,2);
		res = power(n-1,n-1);
		res = mulmod(res,2);
		ans = (ans + power(n,k))%mod;
		res = (res + power(n,n))%mod;
		final = (ans+res)%mod;
		cout<<final<<endl;
		cin>>n>>k;
	}
	// your code goes here
	return 0;
} 