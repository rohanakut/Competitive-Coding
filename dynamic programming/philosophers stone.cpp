#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int h,w;
		cin>>h>>w;
		long long int arr[h][w];
		for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
		{
			int num1;
			cin>>num1;
			arr[i][j] = num1;
		}
		/*for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;}*/
		long long int ans[h][w];
		for(int i=0;i<w;i++)
		ans[0][i] = arr[0][i];
		memset(arr,sizeof(arr),0);
		for(int i=1;i<h;i++){
		for(int j=0;j<w;j++)
		{
			//cout<<ans[i][j]<<" ";
			ans[i][j] = 0;
			//cout<<ans[i][j]<<" ";
		}}//cout<<endl;
		/*for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)
		{
			//cout<<ans[i][j]<<" ";
		//	ans[i][j] = 0;
			cout<<ans[i][j]<<" ";
		}cout<<endl;}cout<<endl;*/
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(i+1<h&&j-1>=0)
				{
					ans[i+1][j-1] = max((ans[i][j]+arr[i+1][j-1]),ans[i+1][j-1]);
				}
				if(i+1<h&&j>=0)
				ans[i+1][j] = max((ans[i][j]+arr[i+1][j]),ans[i+1][j]);
				if(i+1<h&&j+1<=w)
				ans[i+1][j+1] = max((ans[i][j]+arr[i+1][j+1]),ans[i+1][j+1]);
				
			}
		}
		/*for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)
		{
			cout<<ans[i][j]<<" ";
		}cout<<endl;}*/
		long long int res =(-1);
		for(int i=0;i<w;i++)
		{
			res = max(res,ans[h-1][i]);
		}
		cout<<res<<endl;
	}
	// your code goes here
	return 0;
}