#include <stdio.h>
#include <stdlib.h>

int main()
{
int input,i,cari;
int npm[]={101,102,103};
float ipk[]={3.80,3.90,4.00};

printf ("pilih menu: \n");
printf ("1.tampilkan Semua data\n2.tampilkan data(reverse)\n3.pencarian data\n");
printf ("masukkan pilihan: ");
scanf ("%d",&input);

if (input == 1){
	for (i=0;i<=2;i++)
	{
	printf ("npm= %d memiliki nilai %f \n",npm[i],ipk[i]);
	}	
}
if (input == 2){
	for (i=2;i>=0;i--)
	{
	printf ("npm= %d memiliki nilai %f \n",npm[i],ipk[i]);
	}	
}
else if (input == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(npm[i] == cari){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
	}
	return 0;
	}
}
}










