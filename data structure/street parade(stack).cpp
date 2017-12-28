#include <iostream>
#include<stack>
using namespace std;
 
int main() {
	while(1)
	{
		long long int t;
		cin>>t;
		if(t==0)
		break;
		else
		{
			stack<int>s;char c;
			int str[t];int count=1,y;
			//cout<<s.size();
			for(int i=0;i<t;i++)
			{
				cin>>str[i];
				//cin>>c;
			}
			//for(int i=0;i<t;i++)
			//cout<<str[i]<<endl;
			for(int i=0;i<t;i++)
			{
				if(str[i]!=count)
				{
					s.push(str[i]);
				
				}
				else if(str[i]==count)
				{
					count++;
					while(!s.empty())
					{
						
						y=s.top();
						s.pop();
						//while(!s.empty())
						if(count==y)
						{
							count++;
							//y=s.top();
							//s.pop();
						}
						else
						{s.push(y);break;}
					}
				}
				
			}//cout<<count;
			if(s.size()<=1)
			{
				cout<<"yes"<<endl;
				//else
				//cout<<"no"<<endl;
			}
			else
			cout<<"no"<<endl;
		}
			
		}
	// your code here
 
	return 0;
} 