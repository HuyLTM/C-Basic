#include<stdio.h>
#include<math.h>

int main(){
	int opt,month,year;
	int n;
	float a,b,c,cv,dt,p;
	printf("----------MENU----------\n");
	printf("----1.In ngay thang-----\n");
	printf("----2.Kiem tra so%2-----\n");
	printf("----3.Kiem tra tam giac---\n");
	printf("Chon chuc nang\n ");
	scanf("%d", &opt);
	
	switch(opt){
		case 1:
			printf("Nhap thang & nam ");
			scanf("%d %d", &month, &year);	
			if(month>0 && month<=12){
				if(month>=1 && month<=3)
					printf("Quy 1\n");
				else if(month>3 && month<=6)
					printf("Quy 2\n");
				else if(month>=7 && month<=9)
					printf("Quy 3\n");
				else printf("Quy 4\n");
			switch(month){
				case 1:
					printf("31 ngay\n");
					break;
				case 2:
					if((year % 4 == 0) && (year % 100 != 0))
						printf("29 ngay");
					else printf("28 ngay");
					break;
				case 3:
					printf("31 ngay\n");
					break;
				case  4:
					printf("30 ngay\n");
					break;
				case 5:
					printf("31 ngay\n");
					break;
				case 6:
					printf("30 ngay\n");
					break;
				case 7:
					printf("31 ngay\n");
					break;
				case 8:
					printf("31 ngay\n");
					break;
				case 9:
					printf("30 ngay\n");
					break;
				case 10:
					printf("31 ngay\n");
					break;
				case 11:
					printf("30 ngay\n");
					break;
				case 12:
					printf("31 ngay\n");
					break;												
			}				
		}
		else printf("Nhap lai");
		break;	
		
		case 2:
			printf("Nhap n");
			scanf("%d", &n);
			n = (n % 2 == 0) ? printf("Chia het cho 2") : printf("Khong chia het");
		
		case 3:
			printf("Nhap 3 so bat ki ");
			scanf("%f %f %f", &a, &b, &c);
			if(a >= b + c || b >= a + c || c >= a + b) //a+b>c && a+c>b && b+c>a sao cai nay ko dc				
				printf("Khong phai la tam giac");	
			else {
				cv = a + b + c;
				p = cv/ 2;
				dt = sqrt(p*(p-a)*(p-b)*(p-c));
				printf("Chu vi:%.1f\n", cv);
				printf("Dien Tich:%.1f\n", dt);
			}
			break;		
		 	
	} 
	
}
