#include <stdio.h>
 
int main(void) {
	float a,n;
	int c;
	while(1)
	{
	    scanf("%f",&a);
	    if(a==0.00)
	    break;
	    else
	    {
	    	c=0;
	    	n=1.00;
	    	while(1)
	    	if(a>0.00)
	    	{
	    		a=a-(1/(n+1));
	    		n++;
	    		c++;
	    	}
	    	else
	    	{
	    		printf("%d\tcard(s)\n",c);
	    	break;
	    	}
	    }
	}
	
	
	// your code here
 
	return 0;
} 