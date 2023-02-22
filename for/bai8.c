#include<stdio.h>
#include<math.h>
int main(){
	int a,i,j;
	printf("Nhap a: ");
	scanf("%d", &a);
	
	if(a < 2){
		printf(" khong phai la so nguyen to ");
	}
	if(a == 2){
		printf("so do chi co 1 so nguyen to la 2");
	}
	if(a >2){
		printf("\n day cac so nguyen to tu 2 den %d la 2 3 ",a);
		for(i = 3; i <= a; i++){
			for(j = 2; j*j<=i; j++){
				if(i%j==0){
					break;
				}
				else if (j+1 > sqrt(i)){
					printf("%d ",i);
				
				}
			}
		}
	}
	return 0;
}
