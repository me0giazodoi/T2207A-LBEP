#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int m;
	int S=0;
	while(n>0){
		m=n%10;
		S=S+m;
		n=n/10;
	}
	printf("tong cac chu so la %d",S);
}
