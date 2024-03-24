#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p1,*p2;
	int AIDE,i,taille, A[50];
	printf("entrez la taille du tableau\n");
	scanf("%d",&taille);
	for(i=0;i<=taille;i++)
	{
		printf("Entrez l element %d: ",i+1);
		scanf("%d",&A[i]);
	}
	printf("Voici le tableau: \n");
		for(i=0;i<=taille;i++)
			{
				printf("%d\t", A[i]);
			
			}
		printf("\n");
		p1=A;
		p2=A+taille;
		while(p1<p2)
		{
			AIDE=*p1;
			*p1=*p2;
			*p2=AIDE;
			p1++;
			p2--;
		}
		printf("Voici le tableau inverse: \n");
		for(i=0;i<=taille;i++)
			{
				printf("%d\t", A[i]);
			
			}
		printf("\n");
		
}
