#include<stdio.h>
#define N 4
int main()
{
    int aide,A[N]={1,2,3,4};
    int *p1,*p2;
    p1=A;
    p2=A+N-1;
    while(p1<p2)
    {
        aide=(*p1);
        *p1=*p2;
        *p2=aide;
        p1++;
        p2--;
    }
    for(p1=A;p1<A+N;p1++)
        printf("%d\t",*p1);

}