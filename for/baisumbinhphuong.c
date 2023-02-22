#include<stdio.h>

int main(){
	int a,i;
	int sum;
	sum = 0;
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++){
		if(i % 2 != 0){
			sum = sum + i*i;
		}		
	}
	printf("Tong binh phuong cac so le %d la: %d",a,sum);
}
