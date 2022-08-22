#include <stdio.h>
#include <string.h>
int main(){
	char s1[100];
	char s2[100];
	printf("NHap chuoi 1: ");
	scanf("%s",s1);
	printf("Nhap chuoi 2: ");
	scanf("%s",s2);
	printf("Chuoi vua nhap 1: %s\n",s1);
	printf("Chuoi vua nhap 2: %s\n",s2);
	
	strcat(s1,s2);
	printf("Chuoi vua nhap 1: %s\n",s1);
	printf("Chuoi vua nhap 2: %s\n",s2);
	
	strcat(s2,s1);
	printf("Chuoi vua nhap 1: %s\n",s1);
	printf("Chuoi vua nhap 2: %s\n",s2);
	
	if(strcmp(s1,s2)<0){
		printf("AAAA \n");
	}else{
		printf("BBBB \n");
	}
	int v = strchr(s1,'h')-s1;
	strcpy(s1,s2);
	
	if(strcmp(s1,s2)<0){
		printf("CCCC \n");
	}else{
		printf("DDDD \n");
	}
	int d = strlen(s1);
	printf("Do dai chuoi 1: %d\n",d);
}
