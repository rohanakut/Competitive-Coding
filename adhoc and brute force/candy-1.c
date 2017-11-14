#include <stdio.h>
 
int main(void) {
	int t,n,s=1,i,x,y;
	while(s)
	{
	scanf("%d",&t);
	if(t==-1)
	break;
	else
	{
	int a[t-1];
	y=0;
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		y=y+a[i];
	}
	if(y%t==0)
	{
		x=0;
		n=y/t;
		for(i=0;i<t;i++)
		if(n>a[i])
		x=x+(n-a[i]);
		printf("%d\n",x);
	}
    else
    printf("-1\n");
	}
	}
	return 0;
} 
