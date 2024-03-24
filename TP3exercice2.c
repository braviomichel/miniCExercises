#include<stdio.h>
int Nchiffres(long N)
{
    int i=10,cpt=1;
    while(N/i!=0)
    {
        i*=10;
        cpt++;
    }
    return cpt;
}
int main()
{
    printf("%d",Nchiffres(20));
}