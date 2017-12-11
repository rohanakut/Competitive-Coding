/*
resources : http://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
main concept :  the incl includes the current element in the addition and the excl excludes the current element in addition
                The formula for inclu is obvious as it would exclude the PREVIOUS ELEMENT and include the current element,but
                for excl the max(incl,excl) is the formula in which the main concept is that every time the excl for current element is calculated
                it should select the path which gave max sum in the previous iteration.In the previous iteration.Now the max sum in previous 
                iteration may or may not include the previous element.
                To verify the above concept try example : 7,1,1,9
                                                          5,1,1,10,5 
*/
#include <iostream>
#include<vector>
using namespace std;
 
int main() {
	long long int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		vector<long long int>vec;
		long long int j=0,n;
		cin>>n;
		if(n==0)
		{
			cout<<"Case "<<i<<": 0"<<endl;
			continue;
		}
		for(int i=0;i<n;i++)
		{
			cin>>j;
			vec.push_back(j);
		}
		long long int excl=0,incl,excl_new=0;
		incl = vec[0];
		for(int i=1;i<n;i++)
		{
			excl_new = max(incl,excl);
			incl = excl+vec[i];
			excl = excl_new;
		}
		cout<<"Case "<<i<<": "<<max(excl,incl)<<endl;
	}
	// your code goes here
	return 0;
} 