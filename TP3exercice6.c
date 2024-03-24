#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10

int main()
{
    char texte[200],*aide;
    char *tab[N];
    int i,j, taille;
    for(i=0;i<N;i++)
    {
        printf("Entrez le texte %d:\n",i+1);
        gets(texte);
        taille=strlen(texte)+1;
        tab[i]=(char *) malloc(taille*sizeof(char*));
        strcpy(tab[i],texte);
    }
    //afffichage inverse sans echange dans le tableau
    /*
    for(i=N;i>0;i--)
    {
        puts(tab[i]);
        printf("\n");

    }*/

    //affichage avec ecahnge dans le tableau
    for(i=0,j=N-1;i<j;i++,j--)
    {
       aide=tab[i];
       tab[i]=tab[j];
       tab[j]=aide; 
    }
    for(i=0;i<N;i++)
    {
        puts(tab[i]);
    }
}