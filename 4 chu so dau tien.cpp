#include <stdio.h>
int main(){
	int n,m;
	printf("Nhap n=");
	scanf("%d",&n);
	int S=0;
	while (n>0){
		m=n%10;
		S=S*0+m;
		n=n/10;
	}
	printf("chu so dau tien cua n la %d",S);
}
