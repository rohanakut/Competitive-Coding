#include <iostream>
#include<string>
using namespace std;
 
int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int i=0,j=0,a[1000];
		for(i=0;i<n;i++)
	    cin>>a[i];
		int temp;
		for(i=0;i<n;i++)
		for(j=i;j>0;j--)
		{
		    if(a[j]>a[j-1])
		    {
		        temp=a[j];
		        a[j]=a[j-1];
		        a[j-1]=temp;
		    }
		}
		int b[1000];
		for(i=0;i<n;i++)
		cin>>b[i];
		for(i=0;i<n;i++)
		for(j=i;j>0;j--)
		{
		    if(b[j]>b[j-1])
		    {
		        temp=b[j];
		        b[j]=b[j-1];
		        b[j-1]=temp;
		    }
		}
		int sum=0;
		for(i=0;i<n;i++)
		{
			sum=sum+(a[i]*b[i]);
			
		}
		cout<<sum<<endl;
		
        
	}
	
	// your code here
 
	return 0;
} 