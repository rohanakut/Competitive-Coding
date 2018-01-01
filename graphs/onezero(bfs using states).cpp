#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*long long int modulo(string str,long long int n)
{
	long long int rem = 0
	for(int i=0;i<str.size();i++)
	{
		rem = (((rem*10)%n)+(str[i]-'0')%n)%n;
	}
	return rem;
}*/
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		queue<long long int>q;
		queue<string>q1;
		q.push(1);
		q1.push("1");
		while(!q.empty())
		{
			long long int num = q.front();
			string dummy = q1.front();
			q1.pop();
			q.pop();
			//cout<<dummy<<" "<<num<<endl;
			if(num==0)
			{
				cout<<dummy<<endl;
				break;
			}
			string dummy1 = dummy,dummy2 = dummy;
			q.push((num*10)%n); q1.push(dummy1.append("0"));//cout<<dummy.append("0")<<" ";
			q.push(((num*10)+1)%n);q1.push(dummy2.append("1"));
		}
	}
	// your code goes here
	return 0;
}