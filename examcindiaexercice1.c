#include<stdio.h>
int x=4;
int avancer1(){
    x+=1;
    return x;
}
void avancer2(int *x)
{
    *x+=2;
}
void reculer2(){
    x-=2;
}
int reculer3(int *x)
{
    *x-=3;
    return *x;
}

int main ()
{
    int y;
    y=avancer1();
    printf("\n x=%d",x);
    printf("\n y=%d",y);
    avancer2(&y);
    printf("\n x=%d",x);
    printf("\n y=%d",y);
    reculer2();
    printf("\n x=%d",x);
    printf("\n y=%d",y);
    avancer2(&x);
    printf("\n x=%d",x);
    printf("\n y=%d",y);
    x=reculer3(&y);
    printf("\n x=%d",x);
    printf("\n y=%d",y);
    y=reculer3(&x);
    printf("\n x=%d",x);
    printf("\n y=%d",y);
    

}