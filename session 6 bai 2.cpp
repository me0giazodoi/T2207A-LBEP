#include <stdio.h>
int main(){
	int n,t;
	printf("ngay=");
	scanf("%d",&n);
	printf("thang=");
	scanf("%d",&t);
	switch (t){
		case 1: t=0;break;
		case 2: t=31;break;
		case 3: t=59;break;
		case 4: t=90;break;
		case 5: t=120;break;
		case 6: t=151;break;
		case 7: t=181;break;
		case 8: t=212;break;
		case 9: t=243;break;
		case 10: t=273;break;
		case 11: t=304;break;
		case 12: t=334;break;
	}	
	int z;
	z = n+t;
	printf("ngay thu %d cua nam",z);
	switch (z%7){
		case 1: z=2;break;
		case 2: z=3;break;
		case 3: z=4;break;
		case 4: z=5;break;
		case 5: z=6;break;
		case 6: z=7;break;
		case 7: z=1;break; 
	}
	int p=z;
	if(p==1){
		printf(" Hom nay la chu nhat");
	}else{
		printf(" Hom nay la thu %d",p);
	}
}
