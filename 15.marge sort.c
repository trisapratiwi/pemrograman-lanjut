#include <stdio.h>
#include <stdlib.h>

void merge(int awal, int tengah, int akhir);
void mergeSort(int low, int up);
int a[50];

int main(){
	int n,i,batas;
	
	

	printf("\n \tMERGE SORT PROGRAM");
	printf("\n Masukkan batas [ data <20 ] : ");
	scanf("%d",&n);
	fflush(stdin);

	if(n<=1){
		printf("\n | Keterangan :|\n | Batas terlalu kecil, silahkan di ubah!!	  |");
	
		Sleep(3000);
		system("cls");
	
	}
	else if(n>20){
		printf("\n | Keterangan :|\n | Batas terlalu besar, silahkan di ubah!!	  |");
		Sleep(3000);
		system("cls");
	
	}
	else{	
	printf("\n");
	for(i=0;i<n;i++){
		printf(" Masukkan bilangan ke-%d : ",i+1);
		scanf("%d",&a[i]);
		fflush(stdin);
	}
}
printf("\n\n Data sebelum diurutkan : \n");
for(i=0;i<n;i++){
	printf(" %d ",a[i]);
}
printf("\n\n Data setelah diurutkan : \n");
mergeSort(0,n);
for(i=1;i<=n;i++){
	printf(" %d ",a[i]);
}

	return 0;
}

void merge(int awal, int tengah, int akhir){
int h, i,j,k;
int b[50];
h = awal;
i = awal;
j = tengah+1;

while((h<=tengah)&&(j<=akhir)){
	if(a[h] < a[j]){
		b[i]=a[h];
		h++;
	}
	else{
		b[i]=a[j];
		j++;
	}
	i++;
	}
	if(h>tengah){
		for(k=j;k<=akhir;k++){
			b[i]=a[k];
			i++;
		}
	}
	else{
		for(k=h;k<=tengah;k++){
			b[i]=a[k];
			i++;
		}
	}
	for(k=awal;k<=akhir;k++) a[k]=b[k];
}

void mergeSort(int awal, int akhir){
int tengah;
if(awal<akhir){
	tengah=(awal+akhir)/2;
	mergeSort(awal,tengah);
	mergeSort(tengah+1,akhir);
	merge(awal,tengah,akhir);
	}
}
