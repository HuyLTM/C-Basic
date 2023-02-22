#include<stdio.h>

int main(){
	int a;
	float sum;
	sum = 0;
	int i;
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++){
		sum += (float)1/i; // 1.0/i
	}
	printf("Tong nghich dao cua %d la: %.2lf",a,sum);
}
