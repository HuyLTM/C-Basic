#include<stdio.h>
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Nhap mang 1: ");
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	} 
} 
int main(){
	int n,a[n];
	printf("Nhap size cua mang: ");
	scanf("%d", &n);
	nhap(a,n);
	xuat(a,n);
	return 0;
}
