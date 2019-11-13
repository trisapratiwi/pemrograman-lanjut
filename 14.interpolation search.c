#include<stdio.h>
#include <conio.h>
int main()
{
            //deklarasi variable
            int A[10], i,j,k,tkr,low,high,pos,tm;
            //proses penginputan data
            for(i=0;i<10;i++)
            {
                        printf("data ke-%d : ",i+1);
                        scanf("%d",&A[i]);
            }
            //Input data yang akan dicari ;
            printf("\n Masukkan data yang akan cari : ");
            scanf("%d",&k);
            //proses pengurutan data
            for(i=0;i<10;i++){
                        for(j=i+1;j<10;j++){
                                    if (A[i]>A[j]){
                                                tkr=A[i]; A[i]=A[j]; A[j]=tkr;
                                    }
                        }
            }
            //proses pencarian data
            tm=0;
            high=9; low=0; do
            {
                        pos = ((k - A[low]) / (A[high] - A[low]))*(high-low) +  low;
                        if (A[pos] == k){
                                    tm++;
                                    break;
                        }
                        if (A[pos] > k)
                                    high = pos-1;
                        else if (A[pos] < k)
                                    low = pos + 1;
            }
            while(k >= A[low] && k <= A[high]);
                        if (tm>0){
                                    printf(" data %d yang dicari ada dalam array\n",k);
                                    printf(" ===================================");
                        }else{
                                    printf("data tidak ditemukan dalam array\n");}
                        //scanf("%d");
                       
            return(0);
}

