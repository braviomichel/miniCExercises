#include<stdio.h>
#define N 5
int main()
{
    int tab1[N],tab2[N];
    int *p1,*p2 ,trouve=1;
    //remplissage des tableau
    printf("tableau 1\n");
    for(p1=tab1;p1<tab1+N;p1++)
    {
        printf("Entrez un nombre\n");
        scanf("%d",p1);
    }
    printf("tableau 2\n");
    for(p2=tab2;p2<tab2+N;p2++)
    {
        printf("Entrez un nombre\n");
        scanf("%d",p2);
    }
    //verification
    for(p1=tab1,p2=tab2;p1<tab1+N,p2<tab2+N;p1++,p2++)
    {
        if(*p1!=*p2)
        {
            trouve=0;
            break;
        }
    }
    if(trouve)
        printf("VRAI");
    else
        printf("FAUX");
}