#include <stdio.h>
#define taille 10

int main ()
{
	int i,nombre, pos=-1 ;
	int tab [taille] = {1,4,5,8,9,10,15,16,14,20};

	printf("Entrez la valeur recherchee \n");
	scanf("%d",&nombre);
	for(i=0;i<taille;i++)
		{
			if(tab[i]==nombre)
				pos=i;
				
		}
	if(pos!=-1)
		{
			printf("La valeur recherchee est a la position %d",pos);
		}
	else
		printf("La valeur recherchee nexiste pas dans le tableau");
return 0;
}

	
	
	
	
	
	/*for(i=0;i<taille;i++)
		{
			printf("Entrez la valeur numero %d \n", i+1);
			scanf("%d", &tab[i]);
		}
*/
