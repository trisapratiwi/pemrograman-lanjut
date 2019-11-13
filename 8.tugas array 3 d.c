#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){
	int data [3][3][3] = 
	{
		
			{{2,1,1},{3,1,5},{2,2,3}},{{3,2,5},{1,3,4},{0,2,8}},{{1,1,3},{2,1,5},{1,3,1}},
	};	

	int a,b,k;
	float rumus1, rumus2;
	
	for(a=0; a<3; a++){
			
		for(b=0; b<3; b++){
			
			for(k=0; k<3; k++){
				
			}
		}
 rumus1 = sqrt((pow(data[a][0][0] - data[a][1][0],2))+(pow(data[a][0][1] - data[a][1][1],2))+(pow(data[a][0][2] - data[a][1][2],2)));
 rumus2 = sqrt((pow(data[a][1][0] - data[a][2][0],2))+(pow(data[a][1][1] - data[a][2][1],2))+(pow(data[a][1][2] - data[a][2][2],2)));			
	printf("panjang garis AB %d = %f \npanjang garis BC %d = %f \ntotal garis = %f\n\n",a+1,rumus1,a+1,rumus2,rumus1+rumus2);
	}

	system("pause");
	return 0;
	
}
