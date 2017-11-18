#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long int>vec;
long long int first,last,mid,save;
int bin_search(long long int x,long long int first,long long int last )
{
	mid = (first+last)/2;
	if(first<=last)
	{
		if(vec[mid]>x)
		return bin_search(x,first,mid-1);
		else if(vec[mid]<x)
		return bin_search(x,mid+1,last);
		else if(vec[mid]==x)
		return mid;
	}
	save=last;return -1;
	
}
int main() {
	while(1)
	{
		long long int n,ans=0,count=0;;
		cin>>n;
		if(n==0)
		break;
		else
		{
			vec.clear();
			for(int i=0;i<n;i++)
			{
				long long int num;
				cin>>num;
				vec.push_back(num);
			}
			sort(vec.begin(),vec.end());
			vector<long long int>::iterator low,up;
			for(int i=0;i<n-2;i++)
			{
				for(int j=i+1;j<n-1;j++)
				{
					long long int sum = vec[i]+vec[j];
				//	cout<<sum<<" ";
					{
						sum+=1;
						ans = bin_search(sum,0,n-1);
						//cout<<mid+1<<" "<<ans<<" ";
						if(vec[n-1]<sum)
						break;
					//	cout<<mid<<" "<<ans<<" ";
						if(ans==-1)
						{
						    low = lower_bound(vec.begin(),vec.end(),vec[mid+1]);
						    count+=((n-1)-(low-vec.begin()))+1;//,cout<<"ok";
						//    cout<<low-vec.begin()<<" ";
						}
						else
						{
						    low = lower_bound(vec.begin(),vec.end(),vec[ans]);
						    up = upper_bound(vec.begin(),vec.end(),vec[ans]);
						   // cout<<low-vec.begin()<<" "<<ans<<" ";
						    count+=(n-1-(low-vec.begin()))+1;
						
						}
					//	cout<<count<<" ";
					}
				//	cout<<endl;
				}
			}
			cout<<count<<endl;
		}
	}
	// your code goes here
	return 0;
} 