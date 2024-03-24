#include <stdio.h>

int i;

void saisie(int tab[20],int taille)
{
		
		printf("Veuilez entrer les elements du tableau\n");
		for(i=0;i<=taille;i++)
			{
				printf("Element numero %d :", i+1);
				scanf("%d",&tab[i]);
			} 
	
		
	} 
	

void Affichage(int tab[20],int taille)
{
		printf("Voici le tableau: \n");
		for(i=0;i<=taille;i++)
			{
				printf("%d\t", tab[i]);
			
			}
		printf("\n");
}
float moyenne(int* tab[20], int taille)
{
	int S=0;
	float moyenne;
	for(i=0;i<=taille;i++)
		{
			S+=tab[i];
		}
	moyenne=(float)S/taille+1;
	return moyenne;
}

int max(int tab[20],int taille)
{
	int max,M;
	M=tab[0];
	for(i=0;i<=taille;i++)
		{
			if(tab[i]>M)
				M=tab[i];
				max=i;
		}
		return max;
		
	
}
void SuppMax(int tab[20],int taille, int max)
{
	int j;
	for(i=0,j=0;i<taille;i++)
	{
		tab[j]=tab[i];
		if(tab[i]!=tab[max])
			j++;
	}
	
}
int min(int tab[20],int taille)
{
	int min,M;
	M=tab[0];
	for(i=0;i<=taille;i++)
		{
			if(tab[i]<M)
				M=tab[i];
				min=i;
		}
		return min;
}

void SuppMin(int tab[20],int taille, int min)
{
	int j;
	for(i=0,j=0;i<taille;i++)
	{
		tab[j]=tab[i];
		if(tab[i]!=tab[min])
			j++;
	}

int main(){
	int Max,Min;
	char choix;
	float moy;
	int tab[20];
	int taille;
	

	do
	{
		printf("A- Saisie et Affichage\n B- Moyennne \n C-Suppression du Max et affichage \n D-Suppression du min et affichage\n E- Ajout d'un entier a une position donnee\n Q-Quitter\n");
		printf("Veuillez effectuer un choix valide: \n");
		scanf("%c",&choix);
		switch (choix)
		{
			
			case 'A':
				do
				{
					printf("Bienvenue dans ce TP\n");
					printf(" Veuillez saisir la taille du tableau:");
					scanf("%d",&taille);
				} while((taille>20)&&(taille<=0));
				
				saisie(tab[20],taille);
				Affichage (tab[20],taille);
				break;
			case 'B':
				moy=moyenne(tab[20],taille);
				printf("La moyenne des elements du tableau est %d\n",moy);
				break;
			case 'C':
				Max=max(tab[20],taille);
				SupMax(tab[20],taille,max);
				Affiche(tab[20],taille);
				break;
			case 'D':
				Min=min(tab[20],taille);
				SupMin(tab[20],taille,min);
				Affiche(tab[20],taille);
				break;
			
			
			
		}
	} while Choix!= 'Q';			
}

