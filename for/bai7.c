#include<stdio.h>
int main(){
	int n,sum,i;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		sum += i;
		printf("Tong: %d", sum);
	return 0;	
}
