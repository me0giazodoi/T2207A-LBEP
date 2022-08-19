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
	int tm=0;
	int kl=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			tm+=a[i];
			if(kl<tm){
				kl=tm;
			}
		}else{
			tm=0;
		}
	}
	printf("Chuoi cac so duong co tong lon nhat: %d",kl);
}
