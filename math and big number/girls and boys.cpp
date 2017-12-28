#include <iostream>
using namespace std;
 
int main() {
	int b,g;
	cin>>g>>b;
	while(b!=(-1))
	{int res=0;
		if(g==0)
		cout<<b<<endl;
		else if(b==0)
		cout<<g<<endl;
		else if(b==g)
		cout<<"1"<<endl;
		else if(g>b)
		{
			res=g%(b+1);
			if(res==0)
			cout<<(g/(b+1))<<endl;
			else
			cout<<(g/(b+1))+1<<endl;
		}
		else if(b>g)
		{
			res=b%(g+1);
			if(res==0)
			cout<<(b/(g+1))<<endl;
			else
			cout<<(b/(g+1))+1<<endl;
		}
		cin>>g>>b;
	}
	
	// your code here
 
	return 0;
} 