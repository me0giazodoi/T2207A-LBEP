#include <stdio.h>
int main(){
	int n;
	printf("Nhap so gia tri cua mang: ");
	scanf("%d",&n);
	int i;
	int a[n];
	printf("Nhap so nguyen bat ki\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int S=0;
	int TBC;
	int SSL=0;
	for(i=0;i<n;i++){
		if(i%2==1){
			if(a[i]%2==1){
				S=S+a[i];
				SSL++;
			}
		}
	}
	if(SSL>0){
		TBC=S/SSL;
		printf("Trung binh cong cac so le o vi tri chan la %d",TBC);
	}else{
		printf("Khong co so le nao o vi tri chan");
	}
}
