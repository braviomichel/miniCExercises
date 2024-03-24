#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char NomPre[30];
    char sexe;
    int taille, poids;
} personne;
typedef personne Tabpers[100];
void affiche(personne p)
{
    printf(" Nom: %s\t Sexe: %c\t taille: %d\t poids: %d\t",p.NomPre,p.sexe,p.taille,p.poids);
}
void echange(personne *p1, personne *p2)
{
    personne *aide;
    aide=p1;
    p1=p2;
    p2=aide;
}
int compte(Tabpers t)
{
    int i, n=0;
    for(i=0;i<100;i++)
    {
        if((t->taille) >1.5)
            n++;
    }
    return n;
}
void lireCreer(Tabpers t, int n)
{
    FILE *pfile;
   personne pers;
   int i;
    pfile=fopen("metrique.txt","r");
    if(pfile=NULL)
    {
        printf("Erreur a l ouverture du fichier\n");
        exit(-1);
    }
    else{
       for(i=0;i<n;i++)
       {
        while(feof==0)
        {
            fscanf(pfile, "%s\t %c\t %d\t %d\n",&pers.NomPre,&pers.sexe,&pers.taille,&pers.poids);
            t[i]=pers;
        }
       }
    }
    fclose(pfile);
}

int main()
    {
        int i;
        personne *p1;
        p1=(personne*)malloc(10*sizeof(personne));
        for(i=0;i<10;i++,p1++){
            affiche(*(p1));
        }
        echange(p1,p1+10);
        for(i=0;i<10;i++)
        {
            free(p1);
        }

        
    }
