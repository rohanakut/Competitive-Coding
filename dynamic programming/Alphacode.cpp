#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	while(1)
	{
		string str;
		cin>>str;
		if(str[0]=='0')
		break;
		vector<long long int>vec(str.size());
		vec[0] = 1;
		long long int num = str[0]-'0';
		long long int sec = str[1] - '0',flag=0;
		if((num*10+sec)<=26&&sec!=0)
		vec[1] = 2;
		else if(sec==0)
		vec[1] = 1;
		else
		vec[1] = 1;
		for(int i=2;i<str.size();i++)
		{
			long long int j = i;
			num = str[--j]-'0';
			sec = str[i] - '0';
			if((num*10+sec)<=26&&sec!=0&&num!=0)
			vec[i] = vec[i-1]+vec[i-2];
			else if(sec==0)
			vec[i] = vec[i-2];
			else
			vec[i] = vec[i-1];
		}
		//for(int i=0;i<vec.size();i++)
		//cout<<vec[i]<<" ";
		//cout<<endl;
		cout<<vec[str.size()-1]<<endl;
	}
	// your code goes here
	return 0;
} 