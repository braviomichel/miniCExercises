#include<stdio.h>
#define taille 100

typedef struct 
{
	char nom[30];
	char prenom[30];
	int Nbetoile;
	int NbDej;
}participant;
typedef struct 
{
	participant tab[taille];
}TabPart;

void Nb2Etoiles ( TabPart t)
{
	int i;
	for(i=0;i<taille;i++)
	{
		if(t.tab[i].Nbetoile==2)
			printf("%s\t %s\t ",t.tab[i].nom,t.tab[i].prenom);
	}
	
}
int NbDeje (TabPart t)
{
	int compteur=0,i;
	for(i=0;i<taille;i++)
	{
		if(t.tab[i].NbDej==1)
			compteur++;
		else if(t.tab[i].NbDej==2)
			compteur+=2;
	}
	return compteur;
}

int main()
{
	/*TabPart t;
	for(i=0;i=taille;i++)
	{
		printf("Participant %d";i+1);
		printf("Entrez le nom %s",t.tab[i])
	 } */
}








