#include <iostream>
using namespace std;
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		pair<long long int,long long int> posi;
		posi.first=0;
		posi.second=0;
		long long int n,count=1;
		cin>>n;
		int divi = n/4;
		while(divi--)
		{
			posi.second+=count;
			count++;
			posi.first+=count;
			count++;
			posi.second-=count;
			count++;
			posi.first-=count;
			count++;
		}
		int rem = n%4;
		while(rem>0)
		{
			posi.first+=count;
			count++;rem--;
			if(rem==0)
			break;
			posi.second+=count;
			count++;rem--;
			if(rem==0)
			break;
			posi.first-=count;
			count++;rem--;
			if(rem==0)
			break;
			posi.second-=count;
			count++;rem--;
			if(rem==0)
			break;
		}
		cout<<posi.first<<" "<<posi.second<<endl;
	}
	// your code goes here
	return 0;
} 