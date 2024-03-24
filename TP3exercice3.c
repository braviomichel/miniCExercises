#include<stdio.h>
int somme_diviseur(int n)
{
    int i,a;
    a=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            a+=i;
    }
    return a;
}
int parfait (int n)
{
    int trouve=0;
    if(n==somme_diviseur(n))
        trouve=1;
    return trouve;
}
int main ()
{
    int limite,i;
   printf("Entrez la limite:\n");
   scanf("%d",&limite);
   for(i=1;i<limite;i++)
   {
       if(parfait(i))
            printf("%d \t",i);
   }
}