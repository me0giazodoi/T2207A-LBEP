#include <stdio.h>
int main(){
	int n;
	int p;
	int p1,p2;
	p=p1=p2=1;
	printf("Nhap so tu nhien n la: ");
	scanf("%d",&n);
	for(int i=3;i<=n;i++){
		p=p1+p2;
		p1=p2;
		p2=p;
	}
	printf ("So Fibonacci thu %d la: %d",n,p);
}
