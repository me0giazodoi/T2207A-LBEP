#include <stdio.h>
int main(){
	int S=0;
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int m=1;
	while (m<=n){
		S=S+m;
		m++;
	}
	printf("S=%d",S);
}
