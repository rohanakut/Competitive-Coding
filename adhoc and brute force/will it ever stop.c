#include <stdio.h>
 
int main(void) {
	long long int n;
	double x,y;
	
	
		scanf("%lld",&n);
		x=log2(n)/log2(2);
		y=floorf(x);
		if(y==x)
		printf("TAK\n");
		else
		printf("NIE\n");
	
	// your code here
 
	return 0;
} 