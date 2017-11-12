/*
Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

Input
The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

Output
For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.
*/
#include <iostream>
#include<math.h>
 
using namespace std;
 
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		float sqr;
		
		sqr=sqrt(m);
		sqr=ceil(sqr);
		if(n==1)
		n=n+1;
		int count=0;
		if(m>4)
		{
			for(int i=n;i<=m;i++)
			{
				count=0;
				for(int j=2;j<sqr;j++)
				{
					if(i%j==0&&j!=i)
					{
						
						count++;
						break;
					}
				
				}
				if(count==0)
				{
					cout<<i<<endl;
				}
			}
		}
		else
		{
			if(m==2)
			cout<<"2"<<endl;
			else if(m==3)
			cout<<"2"<<endl<<"3"<<endl;
			else 
			cout<<"2"<<endl<<"3"<<endl;
		}
		cout<<endl;
		
	}
	
	// your code here
 
	return 0;
} 