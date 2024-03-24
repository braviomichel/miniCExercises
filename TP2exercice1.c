#include<stdio.h>
#define N 7
int main()
{
    int tab[N]={0,5,14,25,63,98};
    int i, val,tmp;
    printf("Entrez la valeur a ajouter:\n");
    scanf("%d",&val);
    i=N-2;
    while(tab[i]>val)
    {
        tab[i+1]=tab[i];
        i--;
    }
    tab[i+1]=val;
    
    for(i=0;i<N;i++)
    {
        printf("%d\t",tab[i]);
    }



}