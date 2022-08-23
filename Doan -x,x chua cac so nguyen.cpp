#include <stdio.h>
#include <stdlib.h>
int main (){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap cac so nguyen:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int i;
	int m=0;
	for(int i=0;i<n;i++){
		if(m<abs(ary[i])){
			m=abs(ary[i]);
		}
	}
	printf("Doan [%d,%d] chua tat ca cac so nguyen",-m,m);
}
