/*
resources: https://www.quora.com/Are-there-any-good-resources-or-tutorials-for-dynamic-programming-DP-besides-the-TopCoder-tutorial/answer/Michal-Danil%C3%A1k
*/#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<long long int>ans(10000),vec;
long long int t,res=(-1);
int cache[2000][2000];
int find(int start,int end)
{
	if(start>end)
	return 0;
	if(cache[start][end]!=(-1))
	return cache[start][end];
	int year = t-(end-start+1)+1;
	return cache[start][end] = max(find(start+1,end)+year*vec[start],find(start,end-1)+year*vec[end]);
}
int main() {
	long long int year=1,sum=0;
	cin>>t;
	for(int i=0;i<2000;i++)
	for(int j=0;j<2000;j++)
	cache[i][j] = (-1);
	//long long int dp[t][t];
	//vector<long long int>vec;
	for(int i=0;i<t;i++)
	{
		long long int num;
		cin>>num;
		vec.push_back(num);
		ans[i] = num*t;
		year++;
	}//cout<<t;
	find(0,t-1);
	cout<<cache[0][t-1];
	// your code goes here
	return 0;
}