#include<stdio.h>
int checkPrime(int n){
	int i, isPrime =1;
	for (i=2; i<=n/2; ++i){
		if (n%i==0){
			isPrime=0;
			break;
		}
	}
	return isPrime;
}
int main (){
	int i, n, flag =0;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	for (i=2; i<=n/2;++i){
		if (checkPrime(i)==1){
		   if (checkPrime(n-i)==1){
		   	printf("%d =%d +%d\n",n,i,n-i);
		   	flag=1;
		   }
		}
	}
	if (flag ==0)
	printf("%d canot be expressed as the sum of two prime number.",n);
	return 0;
}
