#include<stdio.h>
#include<stdlib.h>
// kieu con tro
void nhap(int *a, int n);
void xuat(int *a, int n);
float tb(int *a, int n);
int findNumberMax(int *a, int n);
int main(){
	int *a;
	int n;
	float kq, max;
	printf("Nhap size cua mang:");
	scanf("%d", &n);
	a= (int*)malloc(n*sizeof(int));
	if(a == NULL){
		printf("Cap phat bo nho khong thanh cong!!!");
		exit(0);
	}else printf("Cap phat bo nho thanh cong!!!\n");
	nhap(a,n);
	xuat(a,n);
	printf("\n%f\n", tb(a,n));	
	printf("%d",findNumberMax(a,n));
}
void nhap(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("phan tu thu %d: ", i);
		scanf("%d", (a+i));
	}	
}
void xuat(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", *(a+i));
	}
}
float tb(int *a, int n){
	int sum, i;
	sum = 0;
	for(i=0; i<n; i++){
		sum += *(a+i);
	}
	float kq= (float)sum/n;
	return kq;
}
int findNumberMax(int *a, int n){
	int i;
	int max = *a;
	for(i=0; i<n; i++){
		if(max<*(a+i))
			max = *(a+i);
	}
	return max;
}

