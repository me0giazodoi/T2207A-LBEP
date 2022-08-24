#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	float S=0;
	float i;
	bool f=false;
	if(n>0){
		for(i=1;i<=n;i++){
			S=S+1/i;
			f=true;
		}
	}
	if(f==false){
		printf("ERROR !!!");
	}else{
		printf("Tong S la: %f",S);
	}
}
