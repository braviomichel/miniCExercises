#include <stdio.h>

#define taille 6

int main()
{
	int tab [taille] = {1,4,5,8,9};
	int val, i,j;
	printf("Entrez le nombre a inserer \n");
	scanf("%d",&val);
	j=4;
	while((val<tab[j]) && (j>=0 ) )
		{
			tab[j+1]=tab[j];
			j--;
		}
	tab[j+1]=val;
	for(i=0;i<taille;i++)
		{
			printf("%d \t ", tab[i]);
		}
	
return 0;
}
