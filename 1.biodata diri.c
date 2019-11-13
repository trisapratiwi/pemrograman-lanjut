#include <stdio.h>
#include <string.h>

int main()
 {
char inama[25],inpm[10],ijurusan[10],ihobi[25],icitacita[25];
	printf("DIBAWAH INI ADALAH BIODATA DIRI SAYA :  \n" ); 
	printf("masukkan nama anda : "); 
	gets(inama);
	printf("masukkan npm anda : ");
	gets(inpm);
	printf("masukkan jurusan anda : ");
	gets(ijurusan);
	printf("masukkan hobi anda : ");
	gets(ihobi);
	printf("masukkan citacita anda : ");
	gets(icitacita);
	
	printf("\nNama Anda : %s dengan npm : %s  jurusan : %s hobi anda : %s bercitacita menjadi : %s",inama,inpm,ijurusan,ihobi,icitacita);
	

	return 0;
}
