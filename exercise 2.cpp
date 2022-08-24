#include <stdio.h>
int main (){
	int n;
	printf("Nhap so gia tri cua mang: ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap cac gia tri cua mang\n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	printf("Gia tri nguoc cua mang la: ");
	for(int i=n-1;i>=0;i--){
		printf("% d",ary[i]);
	}
}
