#include<stdio.h>
#include<stdlib.h>


typedef struct REPERTOIRE
{
	char nom[10];
	char prenom[10];
	long numero;
}repertoire;

int main()
{
	repertoire tab[50];
	int i,taille;
	printf ("Entrez le nombre d'enregitrement à effectuer: \n");
	scanf("%d",&taille);
	for(i=0;i<taille;i++)
		{
			printf( "enregistrement numero %d:\n",i+1);
			printf("Entrez le nom\n");
			scanf("%s",&tab[i].nom);
			printf("Entrez le prenom\n");
			scanf("%s",&tab[i].prenom);
			printf("Entrez le numero\n");
			scanf("%ld",&tab[i].numero);	
		
		}
	printf("Affichage des enregistrements\n");
	for(i=0;i<taille;i++)
		{
			printf("Enregistrement %d \n",i+1);
			printf("Nom : ");
			puts(tab[i].nom);
			printf("\t");
			printf("Prenom : ");
			puts(tab[i].prenom);
			printf("\t");
			printf("Numero : %ld\t",tab[i].numero);
			printf("\n");
		}
}
