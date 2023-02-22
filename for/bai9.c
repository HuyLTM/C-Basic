#include<stdio.h>
int main(){
	float tienGui,tienLai,tyle;
	int nam,i;	
	printf("Nhap tien gui, tien lai, so nam gui tien: ");
	scanf("%f %f %d",&tienGui,&tienLai,&nam);
	for(i = 1; i<=nam; i++){
		tienLai = tienGui*tyle/100;
		tienGui += tienLai;
		printf("%d %.2f %.2f\n ",i,tienLai,tienGui);
	}	
	return 0;
}

