#include <stdio.h>
#include <stdlib.h>
#include <string.h>




struct rekening
{
	
	float saldo;
	char nama[20];
	char bank[5];
	char kota[10];
	char jalan[20];
	char provinsi[20];
	char norek[20];
	struct{
		int tgl;
		int bln;
		int thn;
	}HBD;	
};
typedef struct rekening rek;

int main() 
{

	rek data[10];
	strcpy (data[0].nama,"trisa");
	strcpy (data[0].bank,"bri");
	data[0].HBD.bln = 10;
	data[0].HBD.thn = 1999;
	data[0].HBD.tgl = 26;
	strcpy (data[0].kota,"jombang");
	strcpy (data[0].provinsi,"jawa timur");
	strcpy (data[0].jalan,"janti");
	strcpy (data[0].norek,"11404001");
	data[0].saldo = 150000;
	
	
	
	
	strcpy (data[1].nama,"putri");
	strcpy (data[1].bank,"bni");
	data[1].HBD.bln = 8;
	data[1].HBD.thn = 1994;
	data[1].HBD.tgl = 21;
	strcpy (data[1].kota,"mojokerto");
	strcpy (data[1].provinsi,"jawa timur");
	strcpy (data[1].jalan,"dr.soetomo");
	strcpy (data[1].norek,"3334572");
	data[1].saldo = 250000;
	
	
	strcpy (data[2].nama,"sudarsono");
	strcpy (data[2].bank,"bri");
	data[2].HBD.bln = 12;
	data[2].HBD.thn = 1990;
	data[2].HBD.tgl = 30;
	strcpy (data[2].kota,"pasuruan");
	strcpy (data[2].provinsi,"jawa timur");
	strcpy (data[2].jalan,"melati II");
	strcpy (data[2].norek,"11405001");
	data[2].saldo = 700000;
	
	
	strcpy (data[3].nama,"sukmawati");
	strcpy (data[3].bank,"bri");
	data[3].HBD.bln = 3;
	data[3].HBD.thn = 1994;
	data[3].HBD.tgl = 01;
	strcpy (data[3].kota,"surabaya");
	strcpy (data[3].provinsi,"jawa timur");
	strcpy (data[3].jalan,"jagir");
	strcpy (data[3].norek,"11406001");
	data[3].saldo = 25000000;
	

	
	
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5){
		
		
		printf("----------Selamat Datang di Program Informatika BANK ---------\n\n\n");
		printf("Masukkan pilihan anda : \n");
		printf("1. Tampilkan semua data  \n2. Tampilkan data saya \n3. total saldo nasabah \n4. cari nasabah berdasarkan kota \n5.tampilkan nasabah dengan umur tertentu \n6. cari saldo terbesar & terkecil\n\n\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("Data seluruh nasabah : \n\n");
			for(i = 0; i<4; i++){
				printf("Nama			: %s\n",data[i].nama);
				printf("bank			: %s\n",data[i].bank);
				printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
				printf("bulan lahir		: %d\n",data[i].HBD.bln);
				printf("tahun lahir		: %d\n",data[i].HBD.thn);
				printf("kota			: %s\n",data[i].kota);
				printf("provinsi		: %s\n",data[i].provinsi);	
				printf("jalan			: %s\n",data[i].jalan);
				printf("nomer rekening		: %s\n",data[i].norek);
				printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
			}
		}
		
		if(pilih == 2) {
			char nomer[20];
			printf("masukan nomor rekening =  ");
			scanf("%s",&nomer);
			for(i=0;i<4;i++){
				if(!strcmp(data[i].norek,nomer)){
					
					printf("Nama			: %s\n",data[i].nama);
					printf("bank			: %s\n",data[i].bank);
					printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
					printf("bulan lahir		: %d\n",data[i].HBD.bln);
					printf("tahun lahir		: %d\n",data[i].HBD.thn);
					printf("kota			: %s\n",data[i].kota);
					printf("provinsi		: %s\n",data[i].provinsi);	
					printf("jalan			: %s\n",data[i].jalan);
					printf("nomer rekening		: %s\n",data[i].norek);
					printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
					break;
					
				}
			}
		}
		if(pilih == 3){
			printf("--------------------TOTAL SALDO NASABAH-----------------------\n\n");
			float hasil=0;
			
			for(i=0;i<4;i++){
				hasil+=data[i].saldo;
				printf("%.2f\n",data[i].saldo);			
			}
			printf("--------------------------+\n");
			printf("%.2f\n\n",hasil);
			
		}
		
		if(pilih == 4){
			char kot[10];
			printf("masukan kota anda = ");
			scanf("%s",&kot);
			for(i=0;i<4;i++){
				if(!strcmp(data[i].kota,kot)){
						
						printf("Nama			: %s\n",data[i].nama);
						printf("bank			: %s\n",data[i].bank);
						printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
						printf("bulan lahir		: %d\n",data[i].HBD.bln);
						printf("tahun lahir		: %d\n",data[i].HBD.thn);
						printf("kota			: %s\n",data[i].kota);
						printf("provinsi		: %s\n",data[i].provinsi);	
						printf("jalan			: %s\n",data[i].jalan);
						printf("nomer rekening		: %s\n",data[i].norek);
						printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
						break;
				}
			}
		}
		if(pilih == 5){
			int umur,tahun,salah=0;
			printf("-------CARI NASABAH DENGAN UMUR--------\n\n\n");
			printf("masukan umur nasabah = ");
			scanf("%d",&umur);
			for(i=0;i<4;i++){
			tahun=2019-umur;
				if(tahun==data[i].HBD.thn){
						
						printf("Nama			: %s\n",data[i].nama);
						printf("bank			: %s\n",data[i].bank);
						printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
						printf("bulan lahir		: %d\n",data[i].HBD.bln);
						printf("tahun lahir		: %d\n",data[i].HBD.thn);
						printf("kota			: %s\n",data[i].kota);
						printf("provinsi		: %s\n",data[i].provinsi);	
						printf("jalan			: %s\n",data[i].jalan);
						printf("nomer rekening		: %s\n",data[i].norek);
						printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
						salah=1;
						break;
				}
			}
			if(salah == 0){
				printf("umur nasabah tidak ditemukan\n\n\n");
				
			}
		}
		if(pilih == 6){
			printf("=========nasabah saldo terbesar dan terkecil=========\n\n\n");
			float min=0,max=0;
			for(i=0;i<4;i++){
				if(data[i].saldo<min||min==0){
					min = data[i].saldo;
				}
				if (data[i].saldo>max||max==0){
					max = data[i].saldo;
				}
				
			}
			printf("saldo terbesar = %.2f \n",max);
			printf("saldo terkecil = %.2f\n\n\n",min);
		}
}
	return 0;
}
