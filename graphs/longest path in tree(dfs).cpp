#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
#define max 100007
using namespace std;
int node1,Distance;
void dfs(vector<int>vec[],int node,int start)
{
	int dist[max],par[max],vis[max];
	for(int i=0;i<node+1;i++)
	dist[i]=0,par[i]=0,vis[i]=0;
	stack<int>trav;
	trav.push(start);
//	for(int i=0;i<vec[1].size();i++)
//	cout<<vec[1][i]<<" ";
	while(!trav.empty())
	{
		int u=trav.top();
		//cout<<u<<"  ";
		trav.pop();
		{
			if(!vis[u])
			{
				dist[u]=dist[par[u]]+1;//for storing distances from parent
				dist[start]=0;
				vis[u]++;
				for(int i=0;i<vec[u].size();i++)
				{
					int c=vec[u][i];
					trav.push(c);
					if(!vis[c])
					par[c]=u;//storing the parent
				}
			}
		}
		
	}
//	for(int i=1;i<node+1;i++)
//	cout<<dist[i]<<" ";
//	cout<<endl;
	node1=distance(dist,max_element(dist,dist+(node+1)));//finding the node with largest distance
//	cout<<node1<<" ";
	Distance=dist[node1];//finding the max dist
//	cout<<Distance<<" ";
}
int main() {
	long long int n;
	cin>>n;
	vector<int>vec[max];
	for(int i=0;i<n+1;i++)
	{
		int u,v;
		cin>>u>>v;
		//cout<<u<<" "<<v;
		//cout<<endl;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	dfs(vec,n,1);
	dfs(vec,n,node1);
	cout<<Distance<<endl;
	// your code here
 
	return 0;
} 