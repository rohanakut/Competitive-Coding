#include<iostream>
#include <stdio.h>
using namespace std;
int main(void) {
	unsigned long long int t,a,b,c;
	int i;
	char d;
	
	scanf("%llu",&t);
	scanf("%c",&d);
	while(t--)
	{
		c=0;
		scanf("%lld",&a);
		for(i=0;i<a;i++)
		{
			scanf("%llu",&b);
			if(b!=0)
			b=b%a;
		    c+=b;
		    if(c>=a)
		    {
			   c=c%a;
			   
		    }
		}
    	if(c!=0)
    	printf("NO\n");
    	else
    	printf("YES\n");
		
	}
	// your code here
} 