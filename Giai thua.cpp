#include <stdio.h>
int main (){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i=n;
	int S=1;
	if (n==0){
		printf(" Giai thua cua %d la ",n);
	}else{
		while(i>0){
			S=S*i;
			i--;
		}
		printf("Giai thua cua %d la %d",n,S);
	}
}
