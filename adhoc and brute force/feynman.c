#include <stdio.h>
 
int main(void) {
	int t,n,s=1;
	while(s>0)
	{
		n=0;
		scanf("%d",&t);
	    if(t==0)
	    break;
	    else
	    while(t!=0)
	  {
		n=n+(t*t);
	    t--;
	    }
	    printf("%d\n",n);
	    
	}// your code here
 
	return 0;
} 