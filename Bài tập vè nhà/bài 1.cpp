#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int t;
	t=1;
	while(t<n){
		printf("%d",t);
		t+=2;
	}
}
