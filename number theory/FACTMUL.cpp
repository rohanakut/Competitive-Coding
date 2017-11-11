#include <iostream>
#define mod 109546051211LL
using namespace std;
/*
code to make sure that if a nd b are very large(12 digits each) then mod operation is performed appropriately
*/
long long int overflow_check(long long int a,long long int b)
{
	long long int res=0;
	while(b>0){
		if(b%2==1)
		res=(res+a)%mod;
		a = (a*2)%mod;
		b/=2;
	}
	return(res%mod);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long int n,ans=1,ans1=1;
	cin>>n;
	if(n>=587117)
	cout<<"0"<<endl;
	else
	{
		for(int i=1;i<=n;i++)
		{
			ans = overflow_check(ans,i);
			ans1 = overflow_check(ans1,ans);
		}
		cout<<ans1<<endl;
	}
	// your code goes here
	return 0;
} 