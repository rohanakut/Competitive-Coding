#include <stdio.h>
 
int main(void) {
	int t;
	long long int sum,a,b,n,d,c,e;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%lld%lld%lld",&a,&b,&sum);
		n=(sum*2)/(a+b);
		e=0;
		d=(b-a)/(n-5);
		c=a-(2*d);
		printf("%lld\n",n);
		while(e<n)
		{
			printf("%lld\t",c+(d*e));
			++e;
		}
		printf("\n");
	}
	// your code here
 
	return 0;
} 