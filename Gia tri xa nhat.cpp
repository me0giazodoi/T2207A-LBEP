#include <stdio.h>
#include <stdlib.h>
int main (){
	int z=0;
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap cac so nguyen:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m=0;
	int max=0;
	int x;
	printf("Nhap gia tri cua x:");
	scanf("%d",&x);
	int i;
	for(i=0;i<n;i++){
		m=abs(x-a[i]);
		if(m>max){
			m=max;
			z=i;
		}
	}
	printf("Gia tri trong mang xa x nhat la: %d",a[z]);
}
