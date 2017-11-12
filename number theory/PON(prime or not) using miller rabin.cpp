/*
algorithm : https://www.topcoder.com/community/data-science/data-science-tutorials/primality-testing-non-deterministic-algorithms/
why primalty: https://math.stackexchange.com/questions/1733096/primality-testing-vs-sieve
time complexity O(logn)
*/
#include <iostream>
using namespace std;
typedef unsigned long long ULL;
long long int mulmod(long long int a,long long int b,long long int p)
{
	long long int x=0;
	while(b>0)
	{
		if(b%2!=0)
		x=(x+a)%p;
		a = (2*a)%p;
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
bool miller_rabin(ULL p,ULL it)
{
	ULL temp,mod,a;
	if(p==2)
	return true;
	else if(p<2)
	return false;
	else if(p!=2&&p%2==0)
	return false;
	ULL s = p-1;
	while(s%2==0)
	s/=2;
	temp = s;
//	cout<<s<<" ";
//	cout<<endl;
	for(ULL i=0;i<it;i++)
	{
		a = (rand()%s)+1;
		mod = power(a,s,p);
		temp = s;//always decalre temp here else temp changes after every while loop written below and is never reinitialisd
	//	cout<<s<<" ";
		if(mod==1||mod==p-1)
		continue;
		{
            //cout<<temp;
			while(temp!=p-1&&mod!=p-1)//p-1%p is same as -1%p
			{
				mod = power(mod,2,p);
			//	cout<<"1 ";
				temp*=2;
			//	cout<<temp<<" ";
			}
		}//cout<<endl;
		if(mod!=p-1&&temp%2==0)//temp%2 makes sure that it has gone through the entire while loop above atleast once
		//in case of two this is not possible hence the condition 
		return false;
	}
	return true;
}
 
int main() {
	ULL t;
	cin>>t;
	while(t--)
	{
		ULL n;
		bool ans;
		cin>>n;
		ans = miller_rabin(n,18);
		if(ans==false)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	// your code goes here
	return 0;
} 