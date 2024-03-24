#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char nom[20];
    char prenom [20];
    int hotel, diner,dejeuner,seul; //seul=1,accompagné=0
    // dejeuner et diner =1 s'ils sont dans le repas et 0 sinon
}participant;
typedef participant Tabpart[100];
void Nb2etoile( Tabpart t )
{
    int i;
    for(i=0;i<100;i++)
    {
        if (t[i].hotel==2)
        {
            printf("%s\t %s\t",t[i].nom,t[i].prenom);
        }
    }
}
int Nbdej(Tabpart t)
{
    int i,n=0;
    for(i=0;i<100;i++)
    {
        if(t[i].dejeuner==1)
            n++;
    }
    return n;
}
int Montant(participant p)
{
    int montant=0;
    if(p.hotel==2)
        montant+=750;
    else
        montant+=1000;
    if(p.dejeuner==1)
        montant+=150;
    if(p.diner==1)
        montant+=350;
    if(p.seul==1)
        montant+=montant;
    return montant;
}