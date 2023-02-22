#include<stdio.h>
int main(){
	int i,opt;
	printf("----------MENU----------\n");
	printf("------1.In so chan-----\n");
	printf("------2.In so le-----\n");
	printf("Moi chon so");
	scanf("%d", &opt);
	switch(opt){
		case 1:
			for(i = 1; i<11; i++)
			if(i % 2 == 0)
				printf("%d\n",i);
			break;
		case 2: 
			for(i = 1; i<11; i++)
			if(i % 2 != 0)
				printf("%d\n",i);		
	}
	return 0;		
}
