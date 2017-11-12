/*
Your task consists of evaluate a polynomial of degree n (0 <= n <= 999) represented by its n+1 coefficients of the form:

pn(x) = cnxn + cn-1xn-1 + … + c2x2 + c1x + c0
in each one of the k (1 <= k <= 100) points x1, x2, …, xk. The coefficients of the polynomial and the values where they will be evaluated are integers in the interval [-100, 100] that guarantees that the polynomial's evaluation is at the most 263 – 1.

Input
There will be multiple test cases, each one with 4 lines that are described below 
n: degree of polynomial.
cn cn-1 … c2 c1 c0: coefficients of the polynomial separated by a single space.
k: number of points to evaluate the polynomial.
x1 x2 … xk-1 xk: points to evaluate the polynomial separated by a single space.

The final test case is a single line where n = -1 and this case should not be processed.

Output
For each test case you should print k + 1 lines of output, the very first line containing the case number and the following k lines with the result of the polynomial's evaluation in each one of the k given points. See the sample.

Example
Input:
2
1 -2 -1
5
0 1 -1 2 -2
3
2 1 -2 -1
4
0 -1 2 -2
-1

Output:
Case 1:
-1
-2
2
-1
7
Case 2:
-1
0
15
-9


*/
#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>//for reverse
using namespace std;
 
int main() {
	long long int n,a,i=1;
	while(1)
	{
		cin>>n;
		if(n==(-1))
		break;
		else if(n!=(-1))
		{
			n+=1;
			vector<long long int>vec;
			while(n--)
			{
				cin>>a;
				vec.push_back(a);
			}
			long long int t,res,j=1;
			cin>>t;
			reverse(vec.begin(),vec.end());
			cout<<"Case "<<i<<":"<<endl;
			while(t--)
			{
				cin>>a;
				long long int b = a;
				res=vec[0];
				for(int i=1;i<vec.size();i++)
				{
					res=res+(a*vec[i]);
			//		cout<<a<<" "<<vec[i]<<" "<<res<<" ";
					a = a*b;
				}
				cout<<res<<endl;
			}
		}
		i++;
	}
		// your code goes here
	return 0;
} 