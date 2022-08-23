#include <stdio.h>
int main (){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap cac so nguyen:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int a,b,i;
	int max=0;
	int min=0;
	for(i=0;i<n;i++){
		if(ary[i]>max){
			max=ary[i];
		}
	}
	b=max;
	for(i=0;i<n;i++){
		if(ary[i]<min){
			min=ary[i];
		}
	}
	a=min;
	printf ("Doan [%d,%d] chua tat ca cac so nguyen",a,b);
}
