#include <stdio.h>
int main(){
	int n;
	int S=0;
	do{
		printf("Nhap n=");
		scanf("%d",&n);
		if(n<=0){
			printf("NHap lai n=");
		}
	}
	while(n<=0);
		printf("cac uoc cua n la");
		for(int t;t<=n;t++){
			if(n%t==0){
				printf("%4d",t);
				S=S+t;
			}
		}
	printf(" tong cac uoc cua n la %d",S);
}
