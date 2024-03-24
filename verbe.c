#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char tab[50], verbe[50];
int taille;
//do{
	printf("Entrez le verbe :\n");
	scanf("%s",tab);
	taille=strlen(tab);
	strncpy(verbe,tab,taille-2);
	
//}while ()
strncpy(verbe,tab,taille-2);
printf("Je %s\n",strcat(verbe,"e"));
printf("Tu %s\n",strcat(verbe,"es"));
printf("il %s\n",strcat(verbe,"e"));
printf("nous %s\n",strcat(verbe,"ons"));
printf("vous %s\n",strcat(verbe,"ez"));
printf("ils %s\n",strcat(verbe,"ent"));


}
