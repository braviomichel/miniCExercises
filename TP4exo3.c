#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
char nom[20];
char numero[20];
}pers;
void saisir_personne(pers *p)
{
    printf("Entrez le nom \n");
    scanf("%s",p->nom);
    printf("entrez le numero\n");
    scanf("%s",p->numero);
}
void saisir_repertoire( pers rep[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        saisir_personne(&rep[i]);
    }
}
void afficher_repertoire (pers rep[], int n)
{
    int i ; 
    for(i=0;i<n;i++)
    {
        puts(rep[i].nom);
        printf("\t");
        puts(rep[i].numero);
        printf("\t");
    }
}
void chercher_personne(pers rep[], int n, char *nrecherche[])
{
    int i, trouve=0;
    for(i=0;i<n;i++)
    {
        if(strcmp(rep[i].numero,nrecherche)==0)
        {
            trouve=1;
            break;
        }
    }
    if(trouve)
        printf("Le numero correspond a %s \n",rep[i].nom);
    else
        printf("pas de correspondance");

}
int main()
{
    int n=1,i;
    char nombre[20];
    int choix;
    pers repertoire[20];
    printf("Saisie du repertoire\n");
    printf("Entrez le nombre d enregistrements\n");
    scanf("%d",&n);
    saisir_repertoire(repertoire, n);
    do{
        do{
        printf("1.Afficher repertoire\n 2.chercher le numero d une personne\n 3.Quitter le programme\n");
        printf("choisisssez 1, 2 ou 3\n");
        scanf("%d",&choix);
     }while(choix <1|| choix >3);
        switch (choix)
        {
            case 1:
                afficher_repertoire(repertoire,n);
                break;
            case 2 :
                printf("Entrez le numero de la personne \n");
                scanf("%s",nombre);
                chercher_personne(repertoire, n, nombre);
                break;
            default: break;
        }
    }while(choix!=3);
    
}