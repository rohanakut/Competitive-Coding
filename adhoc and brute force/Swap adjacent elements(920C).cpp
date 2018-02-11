#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//cout<<200000*log2(200000);
	long long int n,flag=0;
	cin>>n;
	
	vector<long long int>arr;
	for(int i=0;i<n;i++)
	{
		long long int num;
		cin>>num;
		arr.push_back(num);
	}
	string str;
	getline(cin,str);
	getline(cin,str);
	vector<long long int>vec;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='0')
		vec.push_back(i);
	}
	if(vec.size()!=0){
	long long int pos = vec[0];
	sort(arr.begin(),arr.begin()+pos+1);
	long long int next_pos = pos;
	{
		for(int i=1;i<vec.size();i++)
		{
			next_pos = vec[i];
			sort(arr.begin()+pos+1,arr.begin()+next_pos+1);
			pos = next_pos;
		}
	}
	sort(arr.begin()+next_pos+1,arr.end());
	for(int i=0;i<n-1;i++)
	{
		//cout<<arr[i]<<" ";
		if(arr[i]>arr[i+1])
		{
			cout<<"NO"<<endl;
			flag = 1;
			break;
		}
	}
	}
	if(flag==0)
	cout<<"YES"<<endl;
	// your code goes here
	return 0;
}