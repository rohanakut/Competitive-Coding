#include <iostream>
#include<vector>
using namespace std;
vector<int>par;
vector<int>vis;
 
 
int main() {
	long long int node,edge;
	cin>>node>>edge;
	int count=0,v=0,edge1,edge2,vis[node]={0},par[node]={0};
	while(edge--)
	{
		cin>>edge1>>edge2;
		if(count=0)
		{
			vis[edge1]++;
			vis[edge2]++;
			par[edge2]=edge1;
			//par[edge1]=(-1);
		}
		else if(vis[edge1]!=1||vis[edge2]!=1)
		{
			if(vis[edge1]!=1&&vis[edge2]==1)
			{
				par[edge2]=edge1;
				vis[edge1]=1;
			}
			else if(vis[edge2]!=1&&vis[edge1]==1)
			{
				par[edge2]=edge1;
				vis[edge2]=1;
			}
			else 
			{
				vis[edge1]=1;
				vis[edge2]=1;
				par[edge2]=edge1;
			}
			
			
		}
		else if(vis[edge1]==1&&vis[edge2]==1)
		{
			if(par[edge1]!=edge2||par[edge2]!=edge1)
			{
				cout<<"NO"<<endl;
				v++;
				break;
			}
		}
	}
	if(v==0)
	cout<<"YES"<<endl;
	
	// your code here
 
	return 0;
} 
