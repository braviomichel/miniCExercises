#include<stdio.h>
#define N 7
int main()
{
    int i, milieu,debut,fin,val,pos=-1;
    int tab[N]={0,5,8,9,65,74,326};
    printf("Entrez la valeur a rechercher:\n");
    scanf("%d",&val);
    //recherche sequencielle
    /*for(i=0;i<N;i++)
    {
        if(tab[i]==val)
        {
            pos=i;
            break;
        }
           
    }*/
    //recherche dichotomique
    milieu=1;
    debut=0;
    fin=N-1;
    while((debut<milieu)|| (fin>milieu))
    {
    milieu=(debut+fin)/2;
    if(tab[milieu]==val)
        pos=milieu;
    else if(tab[milieu]<val)
        debut=milieu+1;
    else
        fin=milieu-1;
    }
    
    printf("%d",pos);
    
}