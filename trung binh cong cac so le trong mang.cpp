#include <stdio.h>
int main(){
	int n;
	printf("Nhap so gia tri cua mang: ");
	scanf("%d",&n);
	int ary[n];
	int i;
	int H=0;
	int S=0;
	int so_so_le=0;
	printf("Nhap so nguyen bat ki\n");
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	for(i=0;i<n;i++){
		if(ary[i]%2!=0){
			S=S+ary[i];
			so_so_le++;
		}
	}
	if(so_so_le>0){
		H=(float)S/so_so_le;
		printf("Trung binh cong cac so le trong mang la %d",H);
	}else{
		printf("Khong co so le nao trong mang");
	}
}
