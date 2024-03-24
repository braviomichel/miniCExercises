#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	int i,j;
	char *chaine[200];
	char *temp;
	(char**)malloc(10*sizeof(char*));
	for(i=0;i<10;i++)
		{
			printf("Entrez la phrase %d \n",i+1);
			gets(*chaine);
		}
	i=0;j=9;
	while(i<j){
		temp = chaine[i];
		chaine[i] = chaine[j];
		chaine[j] = temp;
		i++;j--;
	}
/*	for(i=0;i<10;i++)
		{
			printf("%s \n",chaine+i);
		}*/
	printf("Voici les phrases inverse");
	for(i=10;i>=0;i--)
		{
			printf("%s\n", chaine+i);
		}
}
