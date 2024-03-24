#include <stdio.h>

int taille,i;
int tab[20];
void A()
{
	printf(" Veuillez saisir la taille du tableau:");
		scanf("%d",&taille);
		printf("Veuilez entrer les elements du tableau\n");
		for(i=0;i<=taille;i++)
			{
				printf("Element numero %d :", i+1);
				scanf("%d",&tab[i]);
			}
		printf("Voici le tableau: \n");
		for(i=0;i<=taille;i++)
			{
				printf("%d\t", tab[i]);
			
			}
}
int main()
{
	A();
	return 0;
}


