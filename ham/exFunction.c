#include<stdio.h>
#include<math.h>
char name[40];
void nhapTen(){
	printf("Nhap ten: ");
	scanf("%s", &name);// %c nhap 1 ki tu va %s nhap nhieu ki tu
}
void inTen(){
	printf("%s", name);
}
int soChinhphuong(int n){
	printf("Nhap so muon kiem tra: ");
	scanf("%d", &n);
	double ketqua = pow((double)n, 1.0/2);// da sua  
	if(ketqua == (int)ketqua){
		printf("%d la so chinh phuong\n",n);
	}else printf("%d khong la so chinh phuong\n",n);
}
int soLapphuong(int n){ // co nghia la input 8 ma 8 =2^3 => 8 la so lap phuong
	printf("Nhap n: ");
	scanf("%d", &n);
	double ketqua = pow((double)n, 1.0/3);//da sua
	if(ketqua == (int)ketqua){
		printf("%d la so lap phuong\n", n);
	}else printf("%d khong la so lap phuong\n", n);
}
int menu(){
	int opt;
	printf("\n1.Nhap ten\n");
	printf("2.In ra ten\n");
	printf("3.Kiem tra so chinh phuong\n");
	printf("4.Kiem tra so lap phuong\n");
	printf("Moi ban chon\n");
	scanf("%d", &opt);
	return opt;
}
int main(){
	int opt,n;
	do{
		opt = menu();
		switch(opt){
			case 1: 
				nhapTen();
				break;
			case 2:
				inTen();
				break;
			case 3:
				soChinhphuong(n);		
				break;
			case 4: 
				soLapphuong(n);
				break;	
			default: printf("Nhap lai \n");					
		}
	
	}while(opt>=1 && opt<=4);
	return 0;
}
