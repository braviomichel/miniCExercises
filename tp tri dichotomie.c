#include <stdio.h>
#define taille 10

int main()
{
	int milieu,val ,deb ,fin, tab [taille] = {1,4,5,8,9,10,15,16,18,20};
	printf("Entrez la valeur recherchee \n");
	scanf("%d",&val);
	deb=0,fin=10;
	milieu=(deb+fin)/2;
	printf("%d",milieu);
	while((val!=tab[milieu])&& (fin>deb))
		{
			if(val> tab[milieu])
				deb= milieu+1;
			else
				fin= milieu-1;
		}	
	if(val==tab[milieu])
		printf("La position de la valeur %d est %d",val,milieu);
	else
		printf("La valeur nexiste pas");

return 0;
}
