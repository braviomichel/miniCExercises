#include<stdio.h>
#define N 6
#define M 6
int main()
{
    int A[N]={1,2,3,4,5,6},B[M]={7,8,9,10,11,12},F[N+M];
    int ia=0, ib=0, ifus;
    while((ifus<N+M)||(ia<N)||(ib<M))
    {
        if(A[ia]<B[ib])
        {
            F[ifus]=A[ia];
            ia++;
        }
        else
        {
            F[ifus]=B[ib];
            ib++;
        }
        ifus++;
    } 
    while(ia<N)
    {
        F[ifus]=A[ia];
        ia++;
        ifus++;
    }
    while(ib<M)
    {
        F[ifus]=B[ib];
        ib++;
        ifus++;
    }

     
    for(ifus=0;ifus<N+M;ifus++)
    {
        printf("%d\t",F[ifus]);

    }
}