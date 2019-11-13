#include <stdio.h> 
#include <stdlib.h> 
main(){ 
    int value[8]={8,10,6,-2,11,7,1,100}; 
    int ketemu; 
    int cari; 
    int i; 
    printf("Masukkan data yang dicari = "); 
    scanf("%d",&cari); 
    i=0; 
    ketemu=0; 
    while (i<8 && ketemu!=1){ 
        if (value[i]==cari){ 
        ketemu=1; 
        }else{ 
            i++; 
        } 
    } 
    if(ketemu==1){ 
        printf("Data %d ADA \n",cari ); 
    }else{ 
        printf("Data %d TIDAK ADA\n",cari ); 
    } 
    return 0;
}
