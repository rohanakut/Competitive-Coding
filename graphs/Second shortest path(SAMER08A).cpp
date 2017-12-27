#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class compare{
	public :
	bool operator()(pair<int,int>a,pair<int,int>b){
	return a.second>b.second;
	}
};
int main() {
	while(1)
	{
		int v,e;
		cin>>v>>e;
		if(v==0&&e==0)
		break;
		int src,end;
		cin>>src>>end;
		int graph[v][v],dist[v];
		for(int i=0;i<v;i++)
		for(int j=0;j<v;j++)
		graph[i][j] = INT_MAX,dist[i] = INT_MAX;
		for(int i=0;i<e;i++)
		{
			int a,b,w;
			cin>>a>>b>>w;
			graph[a][b] = w;
		}
		bool visited[v];
		vector<vector<int>> parent(501);
		memset(visited,false,v);
		dist[src]=0;
		priority_queue<pair<int,int>,vector<pair<int,int>>,compare>q;
		q.push(make_pair(src,0));//cout<<"hello ";
		while(!q.empty())
		{
			//cout<<"hello ";
			int node = q.top().first;
			q.pop();
			//cout<<node<< " ";
			visited[node] = true;
			for(int i=0;i<v;i++)
			{
				if(dist[i]>dist[node]+graph[node][i]&&graph[node][i]!=INT_MAX)
				{
					dist[i] = dist[node] + graph[node][i];
					q.push(make_pair(i,dist[i]));
					parent[i].clear();
					parent[i].push_back(node);
				}
				else if(dist[i]==dist[node]+graph[node][i])
				{
					parent[i].push_back(node);
				}
			}
		}/*for(int i=0;i<v;i++)
		{
			for(int j=0;j<parent[i].size();j++)
			cout<<parent[i][j]<<i<<" ";
			cout<<endl;
		}*/
		if(dist[end]==(-1))
		{
			cout<<"-1"<<endl;
			continue;
		}
		/*for(int i=parent.size()-1;i>=0;i--)
		{
			for(int j=0;j<parent[i].size();j++)
			{
				if(parent[i][j]!=i)
				graph[parent[i][j]][i] = INT_MAX;
			}
			//dist[i] = INT_MAX;
		}*/
		queue<int>qu;
		qu.push(end);
		memset(visited,false,v);
		while(!qu.empty())
		{
			int node = qu.front();
			qu.pop();
			//cout<<node;
			int x = parent[node].size();
			for(int i=0;i<x;i++)
			{
				graph[parent[node][i]][node]=INT_MAX;
				if(!visited[parent[node][i]])
				{
					//cout<<parent[node][i]<<" ";
					//graph[parent[node][i]][node]=(-1);
					visited[parent[node][i]]= true;
					qu.push(parent[node][i]);
				}
			}
		}
		//for(int i=0;i<v;i++){
		//for(int j=0;j<v;j++)
		//cout<<graph[i][j]<<"  ";
		//cout<<endl;}
	//	q.clear();
		memset(visited,false,v);
		q.push(make_pair(src,0));
		for(int i=0;i<v;i++)
		dist[i]=INT_MAX;
		dist[src] = 0;
		while(!q.empty())
		{
			int node = q.top().first;
			q.pop();
			//cout<<node<<" ";
			if(visited[node]==true)
			continue;
			visited[node] = true;
			for(int i=0;i<v;i++){
				if(dist[node]+graph[node][i]<dist[i]&&graph[node][i]!=INT_MAX)
				{
					dist[i] = dist[node]+graph[node][i];
					q.push(make_pair(i,dist[i]));
				}
			}
		}
		if(dist[end]!=INT_MAX)
		cout<<dist[end]<<endl;
		else
		cout<<-1<<endl;
	}
	// your code goes here
	return 0;
} 