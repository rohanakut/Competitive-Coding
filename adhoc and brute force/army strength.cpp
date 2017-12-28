#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		string str;
		getline(cin,str);
		long long int ng,nm;
		cin>>ng>>nm;
		long long int g[ng],m[nm];
		for(int i=0;i<ng;i++)
		cin>>g[i];
		for(int i=0;i<nm;i++)
		cin>>m[i];
		sort(g,g+ng);
		sort(m,m+nm);
		//cout<<g[ng-1]<<endl;cout<<m[nm-1];
		if(g[ng-1]>=m[nm-1])
		cout<<"Godzilla"<<endl;
		else if(g[ng-1]<m[nm-1])
		cout<<"MechaGodzilla"<<endl;
		
		
	}
	// your code here
 
	return 0;
} 