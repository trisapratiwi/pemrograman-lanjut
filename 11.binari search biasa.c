#include <stdio.h> 
int main()
{
	int data[10]={1,2,3,4,5,6,7,8,9,10,11};
	int cari, flag=0, awal, tengah, akhir;
	awal=0;
	akhir=11;
	printf("Angka yang dicari :");
	scanf("%d", &cari);
	while (awal<=akhir && flag ==0)
	{
		tengah=(awal+akhir)/2;
		if
		(data[tengah]==cari)
		{
			flag=1;
			break;
		}
		else if
		(data[tengah]<cari)
		{
			awal=tengah+1;
			printf("Kanan\n");
			break;
		}
		else
		{
			akhir=tengah-1;
			printf("Kiri\n");
			break;
		}
	}
	if(flag=1)
	printf("Data ada");
	else
	printf("Data tidak ada");
}
