/*
resources - 
https://www.youtube.com/watch?v=UTCScjoPymA
https://en.wikipedia.org/wiki/Stars_and_bars_(combinatorics)
reference problem -MARBLES(spoj)
*/
#include <iostream>
#include<cmath>
#include<boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using namespace std;
 
int main() {
	while(1)
	{
		//long long int n,k;
		mp::cpp_int ans=1,n,k;
		cin>>n>>k;
		if(n==0&&k==0)
		break;
		while(k--)
		{
			ans*=(n);
		}
		cout<<ans<<endl;
	}
	
	// your code goes here
	return 0;
} 