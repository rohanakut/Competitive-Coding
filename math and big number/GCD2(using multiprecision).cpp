#include <iostream>
#include<algorithm>
#include<boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using namespace std;
mp::cpp_int gcd(mp::cpp_int a,mp::cpp_int b)
{
	//cout<<2;
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int main() {
	mp::cpp_int a,b;
	long long int t;
	cin>>t;
	while(t--)
	{
	//	long long int a,b;
		cin>>a>>b;
		if(a==0)
		cout<<b<<endl;
		else if(b==0)
		cout<<a<<endl;
		else if(a==1)
		cout<<1<<endl;
		else if(b==1)
		cout<<1<<endl;
		else
//		cout<<gcd1(a,b)<<endl;
		cout<<__gcd(a,b)<<endl;
	}
	// your code goes here
	return 0;
} 