#include <stdio.h>
int main(){
	float S;
	int n;
	S=0;
	do{
		printf("Nhap n=");
		scanf("%d",&n);
		if (n<1){
			printf("Nhap lai n=");
		}
	}
	while(n<1);
		printf("Vay tong cua S la: ");
		for(int i=1;i<=n;i++){
			S=S+1.0/i;
		}
		printf("%f",S);
}
