#include <iostream>
#include<map>
#include<vector>
#include<utility>
using namespace std;
 
int main() {
	long long int t;
	cin>>t;
	while(t!=0)
	{
		vector<pair<long long int,long long int>>vec;
		while(t--)
		{
			long long int a,b;
			cin>>a>>b;
			vec.push_back(make_pair(a,b));
		}
		double slope=0;
		long long int count=0,flag=0;
		map<double,int>mp;
		for(int i=0;i<vec.size();i++)
		{
			for(int j=i+1;j<vec.size();j++)
			{
				slope = vec[i].second-vec[j].second;
				if(vec[i].first == vec[j].first&&flag==0)
				slope = 1001;
				else
				slope/= vec[i].first - vec[j].first;
				if(mp[slope]==0)
				{
					count++;
					mp[slope]=1;
				}
			}
		}
		cout<<count<<endl;
		cin>>t;
	}
	// your code goes here
	return 0;
} 