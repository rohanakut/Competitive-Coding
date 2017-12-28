 #include <iostream>
    using namespace std;
     
    int main() {
    	int n,m,o,k=1,i,j;
    	cin>>n;
    	int a[m];
    	while(k<=n)
    	{
    		cin>>o>>m;
    	for(i=0;i<m;i++)
    	cin>>a[i];int temp;
    	for(i=0;i<m;i++)
    	for(j=i;j>0;j--)
    	{
    		if(a[j]>a[j-1])
    		{
    			temp=a[j];
    			a[j]=a[j-1];
    			a[j-1]=temp;
    		}
    	}int sum=0,count=0,sum1=0;
    	for(i=0;i<m;i++)
    	{
    		sum+=a[i];
    		count++;
    		if(sum>=o)
    		{
    			sum1++;
    			break;
    		}
    	}
    	if(sum1>0)
    	{
    		cout<<"Scenario #"<<k<<":"<<endl<<count<<endl<<endl;
    	}
    	else
    	{
    		cout<<"Scenario #"<<k<<":"<<endl<<"impossible"<<endl<<endl;
    	}
    	//cout<<a[i]<<endl;
    	k++;
    	// your code here
    }
    	return 0;
    } 
