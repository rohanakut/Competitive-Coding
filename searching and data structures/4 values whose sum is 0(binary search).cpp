#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
	long long int n,num1,num2,num3,num4;
	vector<long long int>a,b,c,d,vec1,vec2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num1>>num2>>num3>>num4;
		a.push_back(num1);
		b.push_back(num2);
		c.push_back(num3);
		d.push_back(num4);
		//cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
	}//cout<<a.size();
	//cout<<n;
	long long int sum;
	for(int i=0;i<a.size();i++)
	for(int j=0;j<b.size();j++)
	{
		sum = a[i]+b[j];
		//cout<<sum<<" ";
		vec1.push_back(sum);
	}//cout<<vec1.size();
	for(int i=0;i<c.size();i++)
	for(int j=0;j<d.size();j++)
	{
		sum = -c[i]-d[j];
		vec2.push_back(sum);
	}
	//cout<<vec2.size();
	sort(vec1.begin(),vec1.end());
	sort(vec2.begin(),vec2.end());
	long long int count=0,low,up;
	for(int i=0;i<vec1.size();i++)
	{
		low = lower_bound(vec2.begin(),vec2.end(),vec1[i])-vec2.begin();
		up = upper_bound(vec2.begin(),vec2.end(),vec1[i])-vec2.begin();
		count += up-low;
	}
	cout<<count<<endl;
	// your code goes here
	return 0;
} 