#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,x,y,hasil;
	

	printf("Masukkan bilangan : ");
	scanf("%d", &x);
	printf("Masukkan pangkat : ");
	scanf("%d", &y);
	
	for (i=1; i<=y; i++)
	hasil =hasil*x;
	printf("Hasil dari %d pangkat %d = %d\n", x,y,hasil);
	return 0;
}
