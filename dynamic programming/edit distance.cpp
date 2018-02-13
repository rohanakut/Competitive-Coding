#include<bits/stdc++.h>
 
using namespace std;
 
#define MAX 5000
int dp[MAX][MAX],op[MAX][MAX];
string a,b;
 
int res(int m, int n)
{
	if(dp[m][n] !=0)
	return dp[m][n];
 
	if(m == 0)
	{
		return dp[m][n] = n;
	}
 
	if(n == 0)
	{
		return dp[m][n] = m;
	}
 
	if(a[m-1] == b[n-1])
	{
		return dp[m][n] = res(m-1,n-1);
	}
 
 
	return dp[m][n] = min(min(res(m,n-1),res(m-1,n)),res(m-1,n-1)) + 1;
}
 
int main()
{
ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
	int t;
	cin>>t;
 
	while(t--)
	{
		memset(dp,0,sizeof dp);
		cin>>a>>b;
		int m = a.length(), n = b.length();
		assert(m<=MAX and n<=MAX);
		cout<<res(m,n)<<endl;
	}
} 