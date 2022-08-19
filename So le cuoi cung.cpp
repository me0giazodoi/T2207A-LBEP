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
	bool f=false;
	int i;
	for(int i=n-1;i>0;i--){
		if(a[i]%2==1){
			f=true;
			printf("So le cuoi cung la %d",a[i]);break;
		}
	}
	if(f==false){
		printf("Khong co so le");
	}
}
