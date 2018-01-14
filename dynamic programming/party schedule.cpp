#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	while(1){
	long long int final_wt,t;
	cin>>final_wt>>t;
	if(final_wt==0&&t==0)
	break;
	//cout<<final_wt<<t;
	vector<pair<long long int,long long int>>wt;
	for(int i=0;i<t;i++)
	{
		long long int w,v;
		cin>>w>>v;
		wt.push_back(make_pair(w,v));
	}
	sort(wt.begin(),wt.end());
	//for(int i=0;i<t;i++)
	//cout<<wt[i].first<<" "<<wt[i].second<<endl;
	long long int arr[t+1][final_wt+1];
	for (int i = 0; i <= t; i++)
	{
		for (int w = 0; w <= final_wt; w++)
		{
			if (i==0 || w==0)
				arr[i][w] = 0;
			else if (wt[i-1].first <= w)
				arr[i][w] = max(wt[i-1].second + arr[i-1][w-wt[i-1].first], arr[i-1][w]);	
			else
				arr[i][w] = arr[i-1][w];
		}
	}
	int i,j,k;
	for(i=final_wt;i>=0;i--)
	if(arr[t][i]!=arr[t][final_wt])
	break;
	//for()
	cout<<i+1<<" "<<arr[t][final_wt]<<endl;
	}
	// your code goes here
	return 0;
} 