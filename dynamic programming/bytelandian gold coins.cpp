#include <iostream>
#include<map>
#include<algorithm>
//#define mod 1000000000
using namespace std;
#define size 1000000000
map<long long int,long long int> arr;
long long int res=0,res1=0,res2=0,res3=0;
int dp(long long int n)
{
//	cout<<n<<" ";
//	res=0;
	if(n<=1)
	{
		//res=0;
		return n;
	}
	
	else
	{
		if(arr[n]!=0)
		{
		//	res=0;
			return arr[n];
		}
		else
		{
			//res=0;
			for(int i=2;i<=4;i++)
			{
				//cout<<res<<n<<" ";
				
				res1=dp(n/2);
				res2=dp(n/3);
				res3=dp(n/4);
			//	cout<<res<<"c "<<n<<" ";
			}
			//cout
			res=res1+res2+res3;
			arr[n]=max(n,res);
			//cout<<max(n,res)<<" ";
			res=0;res1=0;res2=0;res3=0;
			return arr[n];
			
		}
	}
	//cout<<arr[n];
}
int main() {
	long long int n;
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	arr[3]=3;
	cin>>(n);
	while(!cin.fail()){
		res=0;
	dp(n);
	cout<<arr[n]<<endl;
	cin>>n;
	}
	// your code goes here
	return 0;
}
 
