#include <stdio.h>
 
int main(void)
{
	// your code here
  int t,x,y,c;
  scanf("%d",&t);
  while(t--)
  {
  	scanf("%d%d",&x,&y);
  	if(x==y)
  	{
  		if(x%2==0)
  		c=x+y;
  		else
  		c=x+y-1;
  		printf("%d\n",c);
  	}
  	else if(y==(x-2))
  	{
  		if(x%2==0)
  		c=x+y;
  		else
  		c=x+y-1;
  	  	printf("%d\n",c);
      }
    else
    printf("No Number\n");
  }
 
 
 
	return 0;
} 