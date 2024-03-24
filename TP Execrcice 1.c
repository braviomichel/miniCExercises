#include<stdio.h> 
int main()
{
	int reste,quotient, n1,n2;
	float quotient_rationnel;
	printf("Entrez le premier nombre:\n");
	scanf("%d",&n1);
	printf("Entrez le 2e nombre:\n");
	scanf("%d",&n2);
	reste=n1%n2;
	quotient=n1/n2;
	quotient_rationnel=(float)n1/n2;
	printf("reste: %d \n quotient entier : %d\n quotient rationnel: %f\n", reste,quotient,quotient_rationnel);
}
