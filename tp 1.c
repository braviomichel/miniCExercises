#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,i;
	printf("les nombres sont \n");
	for(i=2;i<500;i++)
		{
			a=i/100;
			b=(i%100)/10;
			c=(i%10);
			if(pow(a,3)+pow(b,3)+pow(c,3)==i)
			printf("%d \t",i);
		}
	
	
}
