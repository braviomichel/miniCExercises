#include<stdio.h>

typedef struct 
{
	char nom[10];
	long numero;
}PERS;
PERS saisir_peronne()
{
	PERS p;
	printf("Entrez le nom de la personne");
	scanf("%s",p.nom);
	printf("Entrez le numero de la personne");
	scanf("%ld",&p.numero);
	return p;
}
 PERS* saisir_repertoire(int nb)
{
	PERS tab[100];
	int i;
	for(i=0;i<nb;i++)
		{
			printf("%d personne",i);
			tab[i]=saisir_personne();
		}
	return tab;
	
}
void afficher_repertoire (PERS Rep[], int nb)
{
	int i;
	for(i=0;i<nb;i++)
		printf("%d personne \n");
		printf("%s\t %ld\t \n", Rep[i].nom,Rep[i].numero);
}
int chercher_numero(PERS Rep[], int num,int nb)
{
	int i;
	int trouve=0;
	for(i=0;i<nb;i++)
	{
		if (Rep[i].numero==num)
			trouve=1;
			break;
	return trouve;
	}
}


int main()
{
	char choix;
	int v,n;
	long num;
	PERS T;
	printf("Entrez la taille du repertoire\n");
	scanf("%d",&n);
	T=saisir_repertoire(n);
	printf("a.Afficher le contenu du repertoire\n b.Chercher le numero dune personne\n c.Quitter le programme");
	scanf("%c",&choix);
	switch (choix) 
	{
		case 'a':
			afficher_repertoire(T,n);
		case 'b':
			printf("Entrez le numero a rechercher\n");
			scanf("%ld",&num);
			v=chercher_numero(T,num,n);
		case 'c':
		return 0;
			
	}
}
