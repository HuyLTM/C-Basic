#include<stdio.h>
int main(){
	int n,giaiThua = 1,i;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n == 0 || n == 1)
		giaiThua = 1;
	else 
		for(i=1; i<=n; i++){
			giaiThua *= i;
	}
	printf("%d! la %d ", n, giaiThua);
	return 0;	
}



