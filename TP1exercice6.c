#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,a,b,c;
    for(i=2;i<500;i++)
    {
        a=i%10;
        b=(i%100)/10;
        c=i/100;
        if(i==(pow(a,3)+pow(b,3)+pow(c,3)))
            printf("%d \n",i);

    }
    return 0;

}