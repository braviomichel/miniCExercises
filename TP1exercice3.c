#include<stdio.h>
int main()
{
    int prix_net, tva;
    float prix_ttc;
    printf("Entrez le prix net de l article : \n");
    scanf("%d",&prix_net);
    printf("Entre le pourcentage de la tva : \n");
    scanf("%d",&tva);
    printf("le prix toute taxe confondu est : \t");
    prix_ttc=prix_net+(float)(prix_net*tva/100);
    printf("%.2f",prix_ttc);
}
