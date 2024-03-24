#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void saisie_tmin(int *tmin,int n)
{
    int i;
    printf("Remplissage du tableau Tmin\n Entrez les temperatures des villes\n");
    for(i=0;i<n;i++)
    {
        printf("Ville %d:\n",i+1);
        scanf("%d",&tmin[i]);
    }
}
void saisie_tmax(int *tmax,int n)
{
    int i;
    printf("Remplissage du tableau Tmax\n Entrez les temperatures des villes\n");
    for(i=0;i<n;i++)
    {
        printf("Ville %d:\n",i+1);
        scanf("%d",&tmax[i]);
    }
}
void affiche (int *t , int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(t+i));
    }
    printf("\n");
}
void calcule_tmoy(int *tmin, int *tmax,int *tmoy,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        tmoy[i]=(tmin[i]+tmax[i])/2;
    }
}
float calcule_moyenne(int *t,int n)
{
    int i,S=0;
    float moy;
    for(i=0;i<n;i++)
    {
        S+=t[i];
    }
    moy=(float)S/n;
    return moy;
}
float calcule_ecart(int *t,int n)
{
    int i;
    float moy,ecart,tmp=0;
    moy=calcule_moyenne(t,n);
    for(i=0;i<n;i++)
    {
        tmp+=(abs(t[i]-moy));
    }
    ecart=sqrt(tmp/n);
    return ecart;
}
int maximum(int *t,int n)
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(t[i]>t[max])
            max=i;
    }
    return t[max];
}
int minimum(int *t,int n)
{
    int i,min=0;
    for(i=0;i<n;i++)
    {
        if(t[i]<t[min])
            min=i;
    }
    return t[min];
}
void temp_inferieure(int *t,int n, int ecart)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(t[i]<ecart)
            printf("%d\t",i);
    }
    printf("\n");
}
int main()
{
    int n,tmin[20],tmax[20],tmoy[20];
    printf("Entrez le nombre de ville\n");
    scanf("%d",&n);
    saisie_tmin(tmin, n);
    saisie_tmax(tmax, n);
    affiche (tmin, n);
    affiche(tmax,n);
    calcule_tmoy(tmin,tmax,tmoy,n);
    affiche(tmoy, n);
    printf(" Temperature moyenne du pays: %.2f \n",calcule_moyenne(tmoy,n));
    printf("Ecart type : %f \n",calcule_ecart(tmoy,n));
    printf("Temperature Maximale de tmax:%d\n",maximum(tmax,n));
    printf("Temperature minimale de tmax:%d\n",minimum(tmin,n));
    temp_inferieure(tmoy,n,calcule_ecart(tmoy,n));
    
}