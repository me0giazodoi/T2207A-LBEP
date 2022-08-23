#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc cua tap hop: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int i;
	int min=0;
	for(i=1;i<n;i++);{
		if(a[i]>0){
			min=a[i];
		}
	}
	for(i=1;i<n;i++){
		if(a[i]>0 && a[i]<min){
			min=a[i];
		}
	}
	printf("So duong nho nhat la: %d",min);
}
