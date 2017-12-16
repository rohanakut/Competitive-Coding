/*
Resources :https://www.youtube.com/watch?v=2E7MmKv0Y24&t=332s
Main algorithm : 
find the minimum 
take the index of minimum
mark the minimum distance vertex as visted
relax all the edges connected to minimum edge
*/
#include <iostream>
#include<limits.h>
using namespace std;
 
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int v,e;
		cin>>v>>e;
		long long int graph[v+1][v+1];
		for(int i=0;i<=v;i++)
		for(int j=0;j<=v;j++)
		graph[i][j]=INT_MAX;
		for(int i=0;i<e;i++)
		{
			long long int a,b,w;
			cin>>a>>b>>w;
			graph[a][b] = w;
		}
		long long int src,end;
		cin>>src>>end;
		long long int dist[v+1];
		bool visited[v+1];
		for(int i=0;i<=v;i++)
		dist[i] = INT_MAX,visited[i]=false;
		dist[src]=0;
		for(int i=0;i<v;i++)
		{
			int crt = -1;
			for(int j=1;j<=v;j++)
			{
				if(visited[j]==true)
				continue;
				else if(crt==(-1)||dist[j]<dist[crt])
				crt = j;
			}
			visited[crt]=true;
			for(int j=1;j<=v;j++)
			{
				if(dist[j]>dist[crt]+graph[crt][j]&&graph[crt][j]!=INT_MAX)
				{
					dist[j] = dist[crt]+graph[crt][j];
				}
			}
		}
		if(dist[end]==INT_MAX)
		cout<<"NO"<<endl;
		else
		cout<<dist[end]<<endl;
		
	}
	// your code goes here
	return 0;
} 