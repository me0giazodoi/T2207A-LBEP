#include <stdio.h>
int main (){
	int n;
	printf("Nhap vao so gia tri cua mang:");
	scanf("%d",&n);
	int a[n];
	printf("Nhap cac so nguyen:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	printf("Nhap gia tri cua x:");
	scanf("%d",&x);
	int i;
	if(x=a[i]){
		printf("x co trong mang",x);
	}else{
		printf("x khong trung voi cac gia tri tren");
	}
}
