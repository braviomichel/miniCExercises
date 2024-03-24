#include<stdio.h>
#include<stdlib.h>

typedef struct HEURE
{
	int heure, minute, seconde;
}Heure;
long Conversion_Seconde(Heure h)
{
	long nbseconde;
	nbseconde= 60*60*h.heure+60*h.minute+h.seconde;
	return nbseconde;
}
Heure Conversion_Heure(long seconde)
{
	Heure h;
	h.heure=seconde/3600;
	h.minute=(seconde%3600)/60;
	h.seconde=((seconde%3600)%60);
	return h;
}
Heure Addition_Heure(Heure h1, Heure h2)
{
	Heure h={0,0,0};
	h.seconde=h1.seconde+h2.seconde;
	if(h.seconde>59)
	{
		h.seconde=h.seconde%60;
		h.minute++;
	}
		
	h.minute+=(h1.minute+h2.minute);
	if(h.minute>59)
	{
		h.minute=(h.minute%60);
		h.heure++;
	}
		
	h.heure+= (h1.heure+h2.heure);
	return h;
	
}
Heure Add_heure(Heure h1, Heure h2)
{
	
	return (Conversion_Heure(Conversion_Seconde(h1)+Conversion_Seconde(h2)));
}
int main()
{
	
	Heure H,H0;
	Heure Ha;
	Heure Hb;
	printf("Entrez la premiere heure\n");
	scanf("%d,%d,%d\n",&Ha.heure);
	printf("Entrez la premiere minute\n");
	scanf("%d,%d,%d\n",&Ha.minute);
	printf("Entrez la premiere seconde\n");
	scanf("%d,%d,%d\n",&Ha.seconde);
	printf("Entrez la  2e heure\n");
	scanf("%d,%d,%d\n",&Hb.heure);
	printf("Entrez la 2e minute\n");
	scanf("%d,%d,%d\n",&Hb.minute);
	printf("Entrez la 2e seconde\n");
	scanf("%d,%d,%d\n",&Hb.seconde);
	
	H=Addition_Heure(Ha,Hb);
	printf(" la somme des deux heures est : %d\t %d\t %d\t", H.heure,H.minute,H.seconde);
	H0=Add_heure(Ha,Hb);
	printf(" la somme des deux heures vala methode magique est : %d\t %d\t %d\t", H0.heure,H0.minute,H0.seconde);
	


	
}
