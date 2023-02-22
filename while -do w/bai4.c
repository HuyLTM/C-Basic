#include<stdio.h>
int main(){
	int a,b;
	char c;
	printf("Nhap bai toan don gian:\n ");
	printf("0. Exit\n");
	scanf("%d%c%d",&a,&c,&b);
	switch(c){
		case '+':
			printf("%d", a+b);
			break;
		case '-':
			printf("%d", a-b);
			break;
		case '*':
			printf("%d", a*b);
			break;
		case '/':
			if(b == 0){
				printf("Nhap b khac 0");
			}else
			printf("%.2f",(float) a/b);
			break;
		default: printf("ERRORR");		
	}
	return 0;
}
