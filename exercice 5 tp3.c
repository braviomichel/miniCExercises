#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,taille, tab1[20]; 
	int verifie=0, tab2[20];
	int *p1;
	int *p2;
	p1=tab1;
	p2=tab2;
	//demande de la taille: les tableaux devant etre compares, je suppose quils ont la meme taille
	printf("Entrez la taille  tableau \n");
	scanf("%d",&taille);
	//Remplissage du premier tableau
	printf("Tableau 1 \n"); 
	for(i=0;i<taille;i++)
		{
			printf("entrez l element %d\n",i+1);
			scanf("%d",(p1+i));
		}
	printf("\n");
	
	// Remplissage du deuxieme tableau
	printf("Tableau 2");
	for(i=0;i<taille;i++)
		{
			printf("entrez l element %d\n",i+1);
			scanf("%d",p2+i);
		}
	printf("\n");
	
	//comparaison des elements des tableaux et affichage de faux et vrai
	for(i=0;i<taille;i++)
		{
			if(*(p1+i)!=*(p2+i))
				verifie=1;
				break;	
		}
	if(verifie)
		printf("FAUX");
	else
		printf("VRAI");

	
return 0;
}
