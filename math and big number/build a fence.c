#include <stdio.h>
#define mi_p 3.14159
int main(void) {
	
    int l;
	float x,area;
	while(1)
	{
		scanf("%d",&l);
		if(l==0)
		break;
		x=l/mi_p;
		area=mi_p*x*x;
		printf("%.2f\n",area/2);
	}
 
	// your code here
 
	return 0;
} 