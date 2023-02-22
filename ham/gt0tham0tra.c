#include<stdio.h>
//void giaiThua(){ // ko tham so , ko gtri tra ve
//	int n,i,tinhGT = 1;
//	printf("Nhap n: ");
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		tinhGT *=i;
//	}
//	printf("%d! = %d", n,tinhGT );
//}
//int main(){
//	giaiThua();
//	return 0;
//}


// ko tham so , co gtri tra ve
void giaiThua(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	return n;
}
int main(){
	int i, tinhGT = 1;
	int n;
	n = giaiThua();
	for(i=1; i<=n; i++){
		tinhGT *=i;
	}
	printf("%d! = %d", n,tinhGT );
	return tinhGT;
}
