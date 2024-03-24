#include <stdio.h>

int taille,i;
int tab[20];
void saisieEtAffichage()
{
	do
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
		printf("\n");
		
	} while((taille>20)&&(taille<=0));
	
}

float moyenne()
{
	int S;
	float moyenne;
	for(i=0;i<=taille;i++)
		{
			S+=tab[i];
		}
	moyenne=(float)S/taille+1;
	return moyenne;
}

int SuppMax()
{
	int max,j;
	for(i=0;i<taille-1;i++)
	{
		if(tab[i]<tab[i+1])
			max=tab[i+1];
		else
			max=tab[i];
	}
	for(i=0,j=0;i<=taille;i++)	
		{
			tab[j]=tab[i];
			if(tab[i]!=max)
				j++;
		}
	printf("Le tableau sans le max est :\n");
	for(i=0;i<=j;i++)
		{
			printf("%d\t",tab[i]);
		}
		printf("\n");
	return max;
}

int SuppMin()
{
	int min,j;
	for(i=0;i<taille-1;i++)
	{
		if(tab[i]<tab[i+1])
			min=tab[i];
		else
			min=tab[i+1];
	}
	for(i=0,j=0;i<=taille;i++)	
		{
			tab[j]=tab[i];
			if(tab[i]!=min)
				j++;
		}
	printf("Le tableau sans le max est :\n");
	for(i=0;i<=j;i++)
		{
			printf("%d\t",tab[i]);
		}
	printf("\n");
	return min;
}

void Ajout ( int position, int nombreAjout)
{
	
}

int main(){

	printf("Bienvenue dans ce TP\n");
	int N=1;
	do
	{
		
		int Max,Min, nombre, pos,moy;
		char choix;
	
		printf("A- Saisie et Affichage\n B- Moyennne \n C-Suppression du Max et affichage \n D-Suppression du min et affichage\n E- Ajout d'un entier a une position donnee\n Q-Quitter\n");
		printf("Veuillez effectuer un choix valide: \n");
		scanf("%c",&choix);
		switch (choix)
		{
			
			case 'A':
				saisieEtAffichage();
				break;
			case 'B':
				moy=moyenne();
				printf("La moyenne des elements du tableau est %d\n",moy);
				break;
			case 'C':
				Max=SuppMax();
				printf("Le max est %d\n",Max);
				break;
			case 'D':
				Min=SuppMin();
				printf("Le min est %d\n",Min);
				break;
			case 'E':
				printf("Entrez la position a laquelle vous voulez ajouter:\n");
				scanf("%d",&pos);
				printf("Entrez le nombre a ajouter :\n");
				scanf("%d",&nombre);
				Ajout(pos, nombre);
				break;
			case 'Q':
				printf("Merci, aurevoir\n");
				N==0;
				break;
			
		}
	} while (N==1);			
}

