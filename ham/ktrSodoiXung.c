#include<stdio.h>
int reverse_num(int n){
	int reverse =0;
	while(n>0){
		reverse= reverse * 10 + n % 10;
		n/=10;
	}
	return reverse;
}
int symetrical_num(int n){
	int flag =0;
	if(reverse_num(n)==n)
		flag=1;
	return flag;	
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int check = symetrical_num(n);
	check ==1? printf("%d la so doi xung", n): printf("%d khong la so doi xung",n);
	return 0;
}
