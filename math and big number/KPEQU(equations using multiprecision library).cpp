/*
resources : 
calculate number of divisors: https://www.math.upenn.edu/~deturck/m170/wk2/numdivisors.html
method to calculate power of primes : https://math.stackexchange.com/questions/642216/factorials-and-prime-factors
                                      http://www.geeksforgeeks.org/given-p-and-n-find-the-largest-x-such-that-px-divides-n-2/
multiprecision library and other methods : https://www.quora.com/How-do-I-multiply-two-large-numbers-stored-as-strings-in-the-C-C++-language

*/
#include <iostream>
#include<cstring>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using namespace std;
mp::cpp_int s1=1,s2=1;
long long int find_prime(long long int n,long long int p)
{
	long long int x=0;
	while(n>0)
	{
		n/=p;
		x+=n;
	}
	//s1*=(x++);
	return ((2*x)+1);
	//cout<<x<<" ";
}
int main() {
	long long int n;
	cin>>n;
	long long int arr[10001];
	memset(arr,0,sizeof(arr));
    //generate primes to check for powers using legendre formula
	for(int i=2;i<10001;i++)
	{
		if(arr[i]==0)
		for(int j=2*i;j<10001;j+=i)
		arr[j]=1;
	}
	while(n!=0)
	{
	//	cout<<n<<endl;
		s1=1;
		for(int i=2;i<=n;i++)//run over entire length of n as n! might contain certain primes that do not divide n
		if(arr[i]==0)
		s1*=find_prime(n,i);
		cin>>n;
		cout<<s1<<endl;
		
	}
	// your code goes here
	return 0;
} 