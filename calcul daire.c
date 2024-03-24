#include<stdio.h>
#include<math.h>



typedef struct coordonnes 
{
	int x;
	int y;
}coord;
typedef struct RECTANGLE
{
	coord hautgauche;
	coord basdroit;
}rectangle;

int main ()
{
	rectangle R;
	int longueur, largeur;
	long aire;
	printf("Entrez l abcisse du point haut gauche\n");
	scanf("%d",&R.hautgauche.x);
	printf("Entrez l ordonnee du point haut gauche\n");
	scanf("%d",&R.hautgauche.y);
	printf("Entrez l abcisse du point bas droit\n");
	scanf("%d",&R.basdroit.x);	
	printf("Entrez l abcisse du point bas droit\n");
	scanf("%d",&R.basdroit.x);
	longueur=abs(R.basdroit.x-R.hautgauche.x);
	largeur=abs(R.hautgauche.y-R.basdroit.y);
	aire = longueur*largeur;
	printf("L aire de votre rectangle est %ld m2",aire);
return 0;
}
