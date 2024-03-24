#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    char nom[20],prenom[20];
    char tel[10];
}repertoire;

void afficher (repertoire tab[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enregistrement %d\t",i+1);
        printf("%s\t %s\t %s\n",tab[i].nom,tab[i].prenom,tab[i].tel);

    }
}
int main ()
{
    // question 1
    /*repertoire rep[20];
    int i, n;
    printf("Entrez la taille du repertoire\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Personne %d", i+1);
        printf("Entrez le nom:\n");
        scanf("%s",rep[i].nom);
        printf("Entrez le prnom:\n");
        scanf("%s",rep[i].prenom);
        printf("Entrez le numero:\n");
        scanf("%s",rep[i].tel);

    }
     afficher(rep,n);*/

     //Question 2
     int i, n;
    FILE *pfile;
    char nom[20],prenom[20];
    char tel[20];
    pfile=fopen( "Exo5.txt","w+");
    if(pfile==NULL)
        exit(-1);
    else{
    printf("Entrez la taille du repertoire\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Personne %d\n", i+1);
        printf("Entrez le nom:\n");
        scanf("%s",nom);
        printf("Entrez le prnom:\n");
        scanf("%s",prenom);
        printf("Entrez le numero:\n");
        scanf("%s",tel);
        fprintf(pfile,"%s\t %s\t %s\n",nom,prenom,tel);
    }
    fclose(pfile);
 }
     pfile=fopen( "Exo5.txt","r");
    if(pfile==NULL)
        exit(-1);
    else{
        printf("Liste des enregistrements \n");
        while(feof(pfile)==0)
        {
    
            fscanf(pfile,"%s\t %s\t %s\n",nom,prenom,tel);
            printf("%s\t %s\t %s\n",nom,prenom,tel);
        }
        fclose (pfile);
    }
     
}