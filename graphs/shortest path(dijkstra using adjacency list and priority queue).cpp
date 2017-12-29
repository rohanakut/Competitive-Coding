#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class compare{
	public:
	bool operator()(pair<int,int>a,pair<int,int>b){
		return a.second>b.second;
	}	
};
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int graph[n+1][n+1];
		bool visited[n+1];
		long long int dist[n+1];
		vector<pair<long long  int,long long int>> adj_list[n+1];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		graph[i][j] = INT_MAX,dist[i] = INT_MAX,visited[i] = false;
		map<string,int> city;
		long long int count = 1;
		for(int i=0;i<n;i++)
		{
			string str;
			cin>>str;
			city[str] = count;
			long long int edge;
			cin>>edge;
			while(edge--)
			{
				long long int b,w;
				cin>>b>>w;
				adj_list[count].push_back(make_pair(b,w));
				graph[count][b] = w;
			}
			count++;
		}
		long long int query;
		cin>>query;
		vector<pair<string,string>> vec;
		while(query--)
		{
			string str1,str2;
			cin>>str1>>str2;
			vec.push_back(make_pair(str1,str2));
		}
		for(int i=0;i<vec.size();i++)
		{
			priority_queue<pair<int,int>,vector<pair<int,int>>,compare> q;
			long long int src = city[vec[i].first];
			long long int end = city[vec[i].second];
			for(int i=0;i<=n;i++)
			visited[i] = false,dist[i] = INT_MAX;
			//q.clear();
			dist[src] = 0;
			q.push(make_pair(src,0));
			while(!q.empty())
			{
				int node = q.top().first;
				int distance = q.top().second;
				q.pop();
				//cout<<node<<" ";
				if(node==end)
				break;
				if(visited[node]==true)
				continue;
				int x = adj_list[node].size();
				for(int i=0;i<x;i++)
				{
					if(dist[adj_list[node][i].first]>dist[node]+adj_list[node][i].second)
					{
						dist[adj_list[node][i].first]=dist[node]+adj_list[node][i].second;
						visited[node]=true;
						q.push(make_pair(adj_list[node][i].first,dist[adj_list[node][i].first]));
					}
				}
			}
			cout<<dist[end]<<endl;
		}
	}
	// your code goes here
	return 0;
} 