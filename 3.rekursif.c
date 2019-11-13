#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float pangkat_rekursif(float a,float b)
{
	if (b==0);{
		return 1;
		
	}if (b<=-1);{
		return pangkat_rekursif (a,b+1)/a;

	else{
	 
	return pangkat_rekursif (a,b-1)*a;
	}
}
	int main()
	{
		float a,b,hasil;
		printf("masukkan bilangan : ");
		scantf("%f",&a);
		printf("masukkan pangkat : ");
		scanf("%f",&b);
		
		hasil=pangkat_rekursif (a,b);
		printf("hasil pangkat rekursif adalah: %f\n",hasil);
	
	return 0;
}
