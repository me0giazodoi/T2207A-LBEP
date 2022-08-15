#include <stdio.h>
int main(){
	int ary[10];
	int i,total,high;
	printf("Nhap 10 so nguyen bat ki\n");
	for(i=0;i<10;i++){
		scanf("%d",&ary[i]);
	}
	high=ary[0];
	for(i=1;i<10;i++){
		if(ary[i]>high)
		high=ary[i];
	}
	int n;
	for(i=1;i<10;i++){
		if(ary[i]>n && ary[i]<high)
		n=ary[i];
	}
	printf("So gan nhat voi so lon nhat la %d",n);
}
