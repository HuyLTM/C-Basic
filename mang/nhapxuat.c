#include<stdio.h>
//#define MAX 100
void NhapMang(int a[], int n){
	int i;
    for( i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n){
	int i;
    for( i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}
void daoChieu(int a[], int n){
	int i;
	for(i=0; i<n/2; i++){
		int t = a[i];
		a[i]=a[n-i-1];
		a[n-i-1]= t;
	}
}
int main(){
	int n,a[n];
	printf("Nhap vao size: ");
	scanf("%d", &n);
	NhapMang(a, n);
	printf("\n Mang ban dau \n");
	XuatMang(a, n);
	daoChieu(a, n);
	printf("\n Mang dao chieu \n");
	XuatMang(a, n);
	return 0;
}
