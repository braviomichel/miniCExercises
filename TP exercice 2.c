#include<stdio.h>
int main()
{
	int A,B,C,tmp1;
	printf("Entrez A\n");
	scanf("%d",&A);
	printf("Entrez B\n");
	scanf("%d",&B);
	printf("Entrez C\n");
	scanf("%d",&C);
	printf("Valeur entrees : A %d\t B%d\t C%d\t",A,B,C);
	tmp1=A;
	A=B;
	B=C;
	C=tmp1;
	printf("Valeur permutees : A %d\t B%d\t C%d\t",A,B,C);

	
}
