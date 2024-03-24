#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n ,j;
	FILE *pfile;
	char nomfamille[20],prenompere[20],prenommere[20];
	int nb;
	char nomenfant[20];
	pfile=fopen("famille.txt", "w");
	printf("Entrez le nombre d enregistrment\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("Enregistrement %d\n",i+1);
			printf("Entrez le nom de famille\n");
			scanf("%s", nomfamille);
			printf("Entrez le prenom du pere\n");
			scanf("%s", prenompere);
			printf("Entrez le prenom de la mere\n");
			scanf("%s", prenommere);
			printf("Entrez  le nombre d enfant\n");
			scanf("%d",&nb);
			fprintf(pfile, " %s\t %s\t %s\t %d enfants\t ", nomfamille,prenompere,prenommere, nb);
			for(j=0;j<nb;j++)
			{
				printf("Entrez le prenom de l enfant %d \n",j+1);
				scanf("%s",nomenfant);
				fprintf(pfile, " %s\t",nomenfant);
			}
			fprintf(pfile, "\n");
			
			
		}
	fclose(pfile);
}

