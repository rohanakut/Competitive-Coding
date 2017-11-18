#include <iostream>
#include<cstring>
using namespace std;
 
int main() {
	while(1)
	{
		long long int flag=0,zero=0,arr[4],diff[4],arr1[4];
		memset(arr,0,sizeof(arr));
		memset(arr1,0,sizeof(arr1));
		memset(diff,0,sizeof(diff));
		for(int i=0;i<4;i++)
		{
			cin>>arr[i];
			if(arr[i]==0)
			zero++;
			if(arr[i]==-1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
		for(int i=0;i<4;i++)
		cin>>arr1[i];
		long long int count=1,save=1;
		if(zero==4)
		cout<<"0 0 0 0"<<endl;
		else{
		for(int i=0;i<4;i++)
		{
			if(arr[i]>arr1[i])
			{
				//cout<<arr[i]<<" ";
				count = arr[i]/arr1[i];
				//cout<<count<<" ";
				if(arr[i]%arr1[i]!=0)
				count++;//diff[i]=(count*arr1[i])-arr[i];
				if(count>save)
				save=count;
			}
		}//cout<<save<<" ";
		for(int i=0;i<4;i++)
		{
			cout<<(arr1[i]*save)-arr[i]<<" ";
		}
		cout<<endl;
		}
	}
	// your code goes here
	return 0;
} 