#include <iostream>
#include<string>
using namespace std;
 
int main() {
	int t;
	while(cin>>t)
	{
		string str;
		cin>>str;
		int len=str.size();
		//len/=t;
		int j=0;
	
		//cout<<len;
		int count=1,i;
			for( i=0,count=1;i<t&&count<=(2*t);i++,count=count+2)
			{//cout<<count<<" ";
				j=i;
				//cout<<str[j];
				while(j<len){
					cout<<str[j];
					j+=(t+t);
					j-=count;
					//while(j<len)
					if(j<len)
					{
						cout<<str[j];
						j+=count;
					}
					else 
					break;
				}
			}
		cout<<endl;
	}
	// your code here
 
	return 0;
} 