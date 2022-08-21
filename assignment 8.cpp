#include <stdio.h>
#include <math.h>
int Chu_vi_tam_giac(int a, int b, int c){
	int p=a+b+c;
	return p;
}
float Dien_tich_tam_giac(int a,int b, int c){
	float p=(float)Chu_vi_tam_giac(a,b,c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int Tong_cac_chu_so_cua_mot_so_nguyen(int n){
	int m;
	int s=0;
	while(n>0){
		m=n%10;
		s=s+m;
		n=n/10;
	}
	return s;
}
int UCLN(int a,int b){
	int So_lon;
	int So_nho;
	int ucln;
	if(a<b){
		So_nho=a;
		So_lon=b;
	}else{
		So_lon=a;
		So_nho=b;
	}
	if(So_lon%So_nho == 0){
		ucln=So_nho;
	}else{
		for(int i=2;i<So_nho;i++){
			if(So_lon%i==0 && So_nho%i==0){
				ucln=i;
			}
		}
	}
	return ucln;
}
int BCNN(int a, int b){
	int So_lon;
	int So_nho;
	int bcnn;
	if(a<b){
		So_nho=a;
		So_lon=b;
	}else{
		So_lon=a;
		So_nho=b;
	}
	if(So_lon%So_nho == 0){
		bcnn=So_lon;
	}else{
		for(int i=So_lon*So_nho;i>So_lon;i--){
			if(i%So_lon==0 && i%So_nho==0){
				bcnn=i;
			}
		}
	}
	return bcnn;
}
int main(){
	int a,b,c;
	printf("Nhap 3 canh cua tam giac:");
	printf("\nCanh a= ");
	scanf("%d",&a);
	printf("Canh b= ");
	scanf("%d",&b);
	printf("Canh c= ");
	scanf("%d",&c);
	if(a<b+c && b<a+c && c<a+b){
		int p=Chu_vi_tam_giac(a,b,c);
		printf("Chu vi tam giac la: %d\n",p);
	
		float s=Dien_tich_tam_giac(a,b,c);
		printf("Dien tich tam giac la: %.2f\n",s);
	}else{
		printf("Day khong phai 3 canh cua 1 tam giac\n");
	}
	
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	int z=Tong_cac_chu_so_cua_mot_so_nguyen(n);
	printf("Tong cac chu so cua mot so nguyen la: %d\n",z);
	
	int e;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d",&e);
	int f;
	printf("Nhap so nguyen thu hai: ");
	scanf("%d",&f);
	int g=UCLN(e,f);
	printf("UCLN cua 2 so nguyen vua nhap la: %d\n",g);
	int h=BCNN(e,f);
	printf("BCNN cua 2 so nguyen vua nhap la: %d\n",h);
}
