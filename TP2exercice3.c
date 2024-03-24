#include<stdio.h>
#define N 6
int main()
{
    int i,pmax,tmp,j,k ;
    int A[N]={77,26,54,89,63,78};
    i=0;
    pmax=0;
    while(i<N-1)
    {
        for(j=i;j<N;j++)
        {
            if(A[j]>A[pmax])
                pmax=j;
            
        }
         
        tmp=A[i];
        A[i]=A[pmax];
        A[pmax]=tmp;
        i++;
    }
     for(i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }

}