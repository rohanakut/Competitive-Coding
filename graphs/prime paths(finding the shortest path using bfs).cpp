//resources:https://cs.stackexchange.com/questions/18138/dijkstra-algorithm-vs-breadth-first-search-for-shortest-path-in-graph
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime[10000];
int find_num(long long int v,long long int j,long long int place)
{
	int num[4],v_prime = v;
	for(int i=0;i<4;i++)
	{
		num[i] = v_prime%10;
		v_prime/=10;
	}
	if(place==4&&j==0)
	return (-1);
	else
	{
		long long int check=0;
		num[place-1] = j;
		for(int i=0;i<4;i++)
		check += num[i]*pow(10,i);
		if(prime[check]==true&&check!=v)
		return check;
		else
		return (-1);
	}
	
}
int main() {
	memset(prime,true,10000);
	for(int i=2;i<=sqrt(9999);i++)
	{
		//cout<<i-1000<<" ";
		if(prime[i]==true)
		for(int j=2*i;j<=9999;j+=i)
		prime[j]=false;
	}
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int dist[10000];
		bool visited[10000];
		memset(visited,false,10000);
		memset(dist,-1,10000);
		long long int src,end;
		cin>>src>>end;
		dist[src] = 0;
		visited[src] = true;
		queue<long long int>q;
		q.push(src);
		while(!q.empty())
		{
			long long int v = q.front();
			q.pop();
			//cout<<v<<" ";
			for(int j=0;j<=9;j++)
			{
				int check_one=(-1),check_two=(-1),check_three=(-1),check_four=(-1);
				check_one = find_num(v,j,1);
				check_two = find_num(v,j,2);
				check_three = find_num(v,j,3);
				check_four = find_num(v,j,4);
				if(check_one!=(-1)&&visited[check_one]==false)
				q.push(check_one),dist[check_one] = dist[v]+1,visited[check_one] = true;
				if(check_two!=(-1)&&visited[check_two]==false)
				q.push(check_two),dist[check_two] = dist[v]+1,visited[check_two] = true;
				if(check_three!=(-1)&&visited[check_three]==false)
				q.push(check_three),dist[check_three] = dist[v]+1,visited[check_three] = true;
				if(check_four!=(-1)&&visited[check_four]==false)
				q.push(check_four),dist[check_four] = dist[v]+1,visited[check_four] = true;
				
			}
		}
		if(dist[end]==(-1))
		cout<<"Impossible"<<endl;
		else
		cout<<dist[end]<<endl;
	}
	// your code goes here
	return 0;
} //