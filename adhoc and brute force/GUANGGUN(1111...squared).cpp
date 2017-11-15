#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
	long long int t;
	while(scanf("%lld",&t)!=EOF)//(!cin.eof()) gives a wrong answer
	{
		long long int sum=0;
		if(t<=9)
		{
			cout<<pow(t,2)<<endl;
		}
		else if(t>=10)
		{
			sum=81*((t/9));
			t=t-((t/9)*9);
			cout<<sum+(t*t)<<endl;
			//cout<<t;
		}
	}
	// your code goes here
	return 0;
} 