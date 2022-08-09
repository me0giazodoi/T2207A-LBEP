#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int t;
	t=0;
	printf("Uoc cua 6 la");
	while (t<n){
		printf(" %d ",t);
		t+=6;
	}
}
