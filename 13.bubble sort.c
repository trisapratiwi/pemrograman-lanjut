#include "stdio.h"

int main()
{
    int L[20],temp,i,j,n=10;
    printf("masukkan %d elemen: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);}

    printf("\nsebelum sorting: ");

    for(i=0;i<n;i++){printf("%d ",L[i]);}

    for(i=n-2;i>=0;i--){
   
        for(j=0;j<=i;j++){
            if(L[j]>L[j+1]){
                temp=L[j];
                L[j]=L[j+1];
                L[j+1]=temp;
            }
        }
    }
    printf("\nsetelah sorting: ");
    for(i=0;i<n;i++){printf("%d ",L[i]);}
    printf("\n");
}
