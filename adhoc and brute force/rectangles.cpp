#include <stdio.h>
 
int main(void) {
	int t,i,j,n=0;
	scanf("%d",&t);
	for(i=2;i<=((int)sqrt(t));i++)
	{ 
	  for(j=i;i*j<=t;j++)
     {
     	
     	n++;
     
     }
	}
	printf("%d",n+t);
	// your code here
 
	return 0;
} 