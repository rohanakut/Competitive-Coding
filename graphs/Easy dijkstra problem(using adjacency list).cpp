#include <iostream>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int v,e;
		cin>>v>>e;
		vector<pair<long long int,long long int>>graph[v+1];
		for(int i=0;i<e;i++)
		{
			long long int a,b,w;
			cin>>a>>b>>w;
			graph[a].push_back(make_pair(b, w));
		}
		long long int src,end;
		cin>>src>>end;
		long long int dist[v+1];
		bool visited[v+1];
		for(int i=0;i<=v;i++)
		dist[i]=INT_MAX,visited[i]=false;
		dist[src]=0;
		for(int i=0;i<v;i++)
		{
			int crt=-1;
			for(int j=1;j<=v;j++)
			{
				if(visited[j]==true)
				continue;
				else if(crt==-1||dist[j]<dist[crt])
				crt = j;
			}
			visited[crt]=true;
			int j=0;
			//cout<<graph[1][0].first;
			while(j<graph[crt].size())
			{
			//	cout<<graph[crt][j].first<<" ";
				if(dist[graph[crt][j].first]>dist[crt]+graph[crt][j].second)
				dist[graph[crt][j].first]=dist[crt]+graph[crt][j].second;
				j++;
			}
		}
		if(dist[end]!=INT_MAX)
		cout<<dist[end]<<endl;
		else
		cout<<"NO"<<endl;
		
	}
	// your code goes here
	return 0;
} 