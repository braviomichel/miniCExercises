#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
	char *chaine[10], *p, texte[200];
	int i,j;
	
	printf("Entrer les  phrases \n");
	for(i=0;i<10;i++)
	{
		printf("Entrez la phrase %d :\n",i+1);
		gets(texte);
		chaine[i] = malloc(strlen(texte)+1);
		strcpy(chaine[i],texte);
	}
	printf(" Les phrases que vous avez entrees\n\n");
	for(i=0;i<10;i++)
	{
		puts(chaine[i]);
	}
	i=0;
	j=9;
	while(i<j)
	{
		p = chaine[i];
		chaine[i] = chaine[j];
		chaine[j] = p;
		i++;
		j--;
	}
	printf(" Les phrases dans l ordre inverse:\n\n");
	for(i=0;i<10;i++)
	{
		puts(chaine[i]);
		free(chaine[i]);
	}
}
