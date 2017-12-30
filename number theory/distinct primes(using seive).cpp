#include <iostream>
#include<bits/stdc++.h>
#define max 10000
using namespace std;

int main() {
	vector<long long int>prime(10000);
	vector<long long int>vec;
	bool visited[max];
	memset(visited,false,max);
	for(int i=2;i<=max;i++)
	{
		//cout<<i<<" ";
		if(visited[i] == false)
		for(int j=2*i;j<=max;j+=i)
		{
			visited[j] = true;
			prime[j]=prime[j]+(-1);
			//cout<<j<<" ";
		}	
		//cout<<endl;
	}
	//cout<<prime[30];
	for(int i=2;i<max;i++)
	if(prime[i]<=(-3))
	vec.push_back(i);//cout<<i<<" ";
	//cout<<vec.size();
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int num;
		cin>>num;
		cout<<vec[num-1]<<endl;
	}
	// your code goes here
	return 0;
}