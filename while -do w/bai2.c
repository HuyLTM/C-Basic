#include<stdio.h>

int main(){
	int n, sum = 0;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		sum += n;	
	}while(n!=0);
	printf("%d\n", sum);
	return 0;
}
