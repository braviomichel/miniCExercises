#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char texte[10],verbe[20], a[20];
    int i,L;
    do{
        printf("Entrez un verbe se terminant par er\n");
        scanf("%s",texte);
        L=strlen(texte);
 }while ((texte[L-2]!="e")|| (texte[L-1]!="r"));
    texte[L-2]="";
    printf("%s",texte);

    

}
