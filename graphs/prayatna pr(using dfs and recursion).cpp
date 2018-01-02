#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100000];
bool visited[100000];
long long int count=0;
void dfs(int node)
{
	if(visited[node])
	return;
	visited[node]=true;
	for(int i=0;i<graph[node].size();i++)
	{
		if(!visited[graph[node][i]])
		dfs(graph[node][i]);
	}
}
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int v,e,save;
		cin>>v>>e;
		if(e==0)
		{
			cout<<v<<endl;
			continue;
		}
		//vector<int>graph[v];
		for(int i=0;i<v;i++)
		graph[i].clear();
		for(int i=0;i<e;i++)
		{
			long long int a,b;
			cin>>a>>b;
			//cout<<a<<b;
			save = a;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		//bool visited[v];
		long long int false_count=0,count=0,num=0,edge=0;
		memset(visited,false,sizeof(visited));
		//cout<<graph[1][1]<<" ";
		stack<int>s;
		for(int i=0;i<v;i++)
		if(!visited[i])
		dfs(i),count++;
		cout<<count<<endl;
	}
	// your code goes here
	return 0;
} 